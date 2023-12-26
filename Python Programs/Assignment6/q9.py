str = input("Enter string : ")

#Reverse a string
def reverse_string(str):
    return str[::-1]

#Reverse without reversing words
def reverse_without_words(str):
    new_str = str.split();
    for ch in range(len(new_str),0,-1):
        print(ch,end="")

#Check wether symmetric or asymmetric
def check_symmetry(str, rev_str):
    if (rev_str == str):
        print ("The given string is symmetrical")
    else:
        print ("The given string is not symmetrical")

#Check Palindrome or not
def check_palindrome(str):
    if (str.lower() == str[::-1].lower()):
        print ("The given string is a palindrome")
    else:
        print ("The given string is not a palindrome")
    
#Given a string s and index i, delete ith value from s
def del_ith_value(s,i):
    s = list(s)
    del s[i]
    return ''.join(s)

#Count the number of vowels and consonants in a string.
def count_vowel_consonant(str):
    vowels = "aeiou"
    cnt_vowels = 0
    cnt_consons = 0
    for char in str:
        if char.lower() in vowels:
            cnt_vowels += 1
        elif char.isalpha():
            cnt_consons += 1
    print ("Number of Vowels : ",cnt_vowels,"\nNumber of Consonants : ",cnt_consons)

#Find length of a string without using inbuilt function.
def find_length(str):
    len = 0
        
#Check if a string contains at least one digit and one alphabet.
def check_digit_alphabet(str):
    hasDigit = False
    hasAlphabet = False
    for ch in str:
        if ch.isdigit():
            hasDigit = True
        elif ch.isalpha():
            hasAlphabet = True
        if hasDigit and hasAlphabet:
            break

#Remove duplicates from a string.
def remove_duplicates(string):
    result = ""
    for i in range(0,len(string)-1):
        if(string[i] == string[i+1]):
            continue;
        else:
            result += string[i]


#Count frequency of characters in a string.
def count_frequency(string):
    freq = 0
    for i in range(0,len(string)):
        for j in range(i+1,len(string)):
            if (string[i]==string[j]) :
                freq+=1
        print("Frequency of ",string[i]," is ",freq)
        freq=0

#calling all functions
count_vowel_consonant("Hello World")
find_length("Hello World")
check_digit_alphabet("Hello World")
remove_duplicates("Hello World")
count_frequency("Hello World")        