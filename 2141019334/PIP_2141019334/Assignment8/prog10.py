def print_increasing_numbers(n, current_number=1, current_digit=1):
    if current_digit > n:
        return

    print(current_number, end=", ")

    for i in range(10):
        new_number = current_number * 10 + i
        if new_number < 10 ** n:
            print_increasing_numbers(n, new_number, current_digit + 1)

# Example usage
n = 3
print(f"Strictly increasing numbers with {n} digits:")
print_increasing_numbers(n)
