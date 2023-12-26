def LCM(a,b):
    x = max(a,b)
    for i in range(1,x):
        if((a % i) == 0 and (b % i) == 0):
            lcm = i
    return lcm
x = LCM(12,22)
print("GCD : ",(12*22)/x)
print("LCM : ",x)