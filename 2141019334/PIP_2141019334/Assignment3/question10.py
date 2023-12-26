def LCM(a,b):
    x = max(a,b)
    for i in range(1,x):
        if((a % i) == 0 and (b % i) == 0):
            lcm = i
    return lcm
print(LCM(6,23))