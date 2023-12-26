gvar = 10
def t():
    lvar = 20
    print("inside function test global var : ",gvar)
    print("inside function test local var : ",lvar)
t()
print("inside function test global var : ",gvar)
#print("inside function test local var : ",lvar) lvar is not defned for global scope
