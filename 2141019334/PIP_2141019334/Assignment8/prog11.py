def generate_binary_strings(n, current_string=""):
    if n == 0:
        print(current_string)
    else:
        generate_binary_strings(n - 1, current_string + "0")
        generate_binary_strings(n - 1, current_string + "1")

# Example usage
n = 3
print(f"All binary strings of {n}-bit length:")
generate_binary_strings(n)
