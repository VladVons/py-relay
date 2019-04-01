'''
Custom scrypt example
Variable `Result` returns a result 
'''

State = (self.apix.Value < 40)
self.apix.SetValue('$DH3_Relay_A', int(State))
self.apix.SetValue('$DH3_Relay_B', int(not State))

if (self.apix.Value < 30):
    print('---1', 'Errors %s, Posts %s' % (self.apix.Device.ErrCnt, self.apix.Device.PostCnt))

Result = State
