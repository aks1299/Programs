def t1():
    t1.a=10
    def t2():
        t1.a=8
        print("inside function test2 : ",t1.a)
    t2()
    print("outside function test2 : ",t1.a)
t1()