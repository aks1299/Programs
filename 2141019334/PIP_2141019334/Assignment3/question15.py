def sumOfDigits(n):
    m = n
    sum = 0
    while (m > 0):
        r = m % 10
        sum += r
        m = m//10
    return sum


print("The sum of digits is", sumOfDigits(13344))
