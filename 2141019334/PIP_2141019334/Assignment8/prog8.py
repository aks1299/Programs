def is_prime(n, divisor=2):
    if n <= 1:
        return False
    elif divisor > n ** 0.5:
        return True
    elif n % divisor == 0:
        return False
    else:
        return is_prime(n, divisor + 1)

# Example usage
number = 17
result = is_prime(number)

if result:
    print(f"{number} is a prime number.")
else:
    print(f"{number} is not a prime number.")
