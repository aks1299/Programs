def numWords(str):
    s = str.split(" ")
    return len(s)

s = input("Enter the sentence : ")
print(numWords(s))
