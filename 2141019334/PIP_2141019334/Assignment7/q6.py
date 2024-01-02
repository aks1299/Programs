#Write a function that takes n as an input and creates a list of n lists such that ith list contains first five multiples of i.
def generate_multiples_lists(n):
    result = []
    for i in range(1, n + 1):
        multiples = [i * j for j in range(1, 6)]
        result.append(multiples)
    return result

# Example usage:
n_value = 5
result_lists = generate_multiples_lists(n_value)
print(result_lists)
