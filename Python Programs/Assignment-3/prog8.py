def isPerfect(n):
    divSum = 0
    for i in range(1,n):
        if(n % i == 0):
            divSum += i
    if(divSum == n):
        return True
    else:
        return False

print(isPerfect(15))