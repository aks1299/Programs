def print_interleavings(str1, str2, interleaved=""):
    if not str1 and not str2:
        print(interleaved)
        return

    if str1:
        print_interleavings(str1[1:], str2, interleaved + str1[0])

    if str2:
        print_interleavings(str1, str2[1:], interleaved + str2[0])

# Example usage
string1 = "AB"
string2 = "CD"
print("Interleavings of strings", f"'{string1}' and '{string2}':")
print_interleavings(string1, string2)
