#Write a function that takes a number as an input parameter and returns the correspond text in words, for example, on input 452, the function should return ‘Four Five Two’. Use a dictionary for mapping digits to their string representation.
def number_to_words(num):
    # Define a dictionary for mapping digits to their string representation
    digit_mapping = {
        '0': 'Zero',
        '1': 'One',
        '2': 'Two',
        '3': 'Three',
        '4': 'Four',
        '5': 'Five',
        '6': 'Six',
        '7': 'Seven',
        '8': 'Eight',
        '9': 'Nine'
    }

    # Convert the number to a string to iterate through its digits
    num_str = str(num)

    # Use a list comprehension to get the words for each digit
    words_list = [digit_mapping[digit] for digit in num_str]

    # Join the words into a single string
    result = ' '.join(words_list)

    return result

# Example usage:
input_number = 452
result_words = number_to_words(input_number)
print(result_words)
