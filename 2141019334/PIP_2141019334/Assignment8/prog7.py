def calculate_sum(n):
    if n <= 0:
        return 0
    else:
        return n + calculate_sum(n - 2)

# Example usage with n = 6
n = 6
result = calculate_sum(n)
print(f"The sum of the series for n = {n} is: {result}")
