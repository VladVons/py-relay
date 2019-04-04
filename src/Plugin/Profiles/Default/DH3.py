'''
Custom scrypt example
Variable `Result` returns a result 
'''

api = self.apix
State = (api.xValue < 40)
api.xASetValue('$DH3_Relay_A', int(State))
api.xASetValue('$DH3_Relay_B', int(not State))

if (api.xValue < 30):
    print('---1', 'Errors %s, Posts %s' % (api.Device.ErrCnt, api.Device.PostCnt))

Result = State
