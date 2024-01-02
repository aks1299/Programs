def multiply_recursive(a, b):
    if b == 0:
        return 0
    else:
        return a + multiply_recursive(a, b - 1)

# Example usage
num1 = 5
num2 = 3
result = multiply_recursive(num1, num2)
print(f"The product of {num1} and {num2} is: {result}")
