def isArmstrong(n):
    m = n
    sum = 0
    while (m > 0):
        r = m % 10
        sum += r**3
        m = m // 10
    if (sum == n):
        return True
    else:
        return False


for i in range(1, 1001):
    if (isArmstrong(i)):
        print("The number : ", i)
