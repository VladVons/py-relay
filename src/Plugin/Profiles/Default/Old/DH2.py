'''
Custom scrypt example
Variable `Result` returns a result 
'''

State = (self.Value > 20)
#self.SetValue('$DH2_Relay_A', int(State))
#self.SetValue('$DH2_Relay_B', int(not State))

if (State):
    print('---1', 'Errors %s, Posts %s' % (self.Parent.ErrCnt, self.Parent.PostCnt))

Result = State
