"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""


import smtplib
#
from Inc.Log      import Log
from Inc.Param    import TDictParam
from Core.Device  import TControl


class TControlSendMail(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        # Param":{"MailTo":"VladVons@gmail.com", "Relay":"smtp.gmail.com", "Port":"465", "User":"ua0976646510@gmail.com", "Password":"19710819"}
        Pattern = {'MailTo': TDictParam.Required, 'Subject': 'TGMail', 'User': '', 'Password': '', 'Port': 0, 'Relay': 'localhost', 'SSL': True}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def _Set(self, aCaller, aValue):
        if (aValue == True):
            if (aCaller):
                Msg = 'Alias: %s, Value: %s' % (aCaller.Alias, aCaller.Value)
            else:
                Msg = 'Alias: %s' % (self.Alias)
            self.Send(Msg)

    def Send(self, aBody):
        # http://www.raspberry-projects.com/pi/software_utilities/email/ssmtp-to-send-emails
        Msg = '\r\n'.join([
            'From: '    + self.Param.User,
            'To: '      + self.Param.MailTo,
            'Subject: ' + self.Param.Subject,
            '',
            aBody
            ])
        try:
            #print('---1', self.Relay, self.Port, self.User, self.Password)
            if (self.Param.SSL):
                Server = smtplib.SMTP_SSL(self.Param.Relay, self.Param.Port)
            else:
                Server = smtplib.SMTP(self.Param.Relay, self.Param.Port)

            Server.ehlo()
            if (self.Param.User):
                Server.login(self.Param.User, self.Param.Password)

            Server.sendmail(self.Param.User, self.Param.MailTo, Msg)
            Server.close()
        except smtplib.SMTPAuthenticationError as E:
            Log.PrintDbg(1, 'x', 'Authentication error', E)

