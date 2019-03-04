'''
Custom scrypt example
Variable `Result` returns a result 
'''

State = (self.Value < 40)
self.SetValue('$DH3_Relay_A', int(State))
self.SetValue('$DH3_Relay_B', int(not State))

if (self.Value < 30):
    print('---1', 'Errors %s, Posts %s' % (self.Parent.ErrCnt, self.Parent.PostCnt))

Result = State
