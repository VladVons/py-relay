"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.01
License:     GNU, see LICENSE for more details
Description:
"""

try:
    from viberbot import Api
    from viberbot.api.bot_configuration import BotConfiguration
except:
    print('Error: import viberbot', 'pip install viberbot')


bot_configuration = BotConfiguration (
    name='PythonSampleBot',
    avatar='http://viber.com/avatar.jpg',
    auth_token='YOUR_AUTH_TOKEN_HERE'
)

viber = Api(bot_configuration)
