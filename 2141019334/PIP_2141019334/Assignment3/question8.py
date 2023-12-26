def isPerfect(a):
    pr = 0
    for i in range (1,a):
        if(a % i == 0):
            pr = pr + i
    if(pr == a):
        return True
    else:
        return False
print(isPerfect(6))

        