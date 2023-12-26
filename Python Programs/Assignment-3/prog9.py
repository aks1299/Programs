def max3(num1, num2, num3):
    def findMax(a, b):
        if a > b:
            return a
        else:
            return b
    
    max2 = findMax(num1, num2)
    max = findMax(max2, num3)
    return max

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
num3 = float(input("Enter the third number: "))

maximum = max3(num1, num2, num3)
print("The maximum of the three numbers is:", maximum)
