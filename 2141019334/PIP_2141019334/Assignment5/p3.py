gvar = 10
def t():
    global gvar
    lvar = 20
    gvar = 30
    print("inside function test global var : ",gvar)
    print("inside function test local var : ",lvar)
t()
print("inside function test global var : ",gvar)
