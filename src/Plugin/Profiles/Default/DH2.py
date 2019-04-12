'''
Custom scrypt example
Variable `Result` returns a result 
'''


api   = self.apix
State = (api.xValue > 20)
#api.xASetValue('$DH2_Relay_A', int(State))
#api.xASetValue('$DH2_Relay_B', int(not State))

if (State):
    print('---1', 'Errors %s, Posts %s' % (api.Parent.ErrCnt, api.Parent.PostCnt))

Result = State
