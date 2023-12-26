import math
sum = 1
x = int(input("Enter x : "))
n = int(input("Enter n : "))
for i in range(1, n+1):
    sum += ((-1)**i)*(x**(2*i))/math.factorial(2*i)
print(sum)
