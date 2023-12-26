#Write a program that takes a sentence as input from the user and computes the frequency of each letter. Use a variable of dictionary type to maintain the count.
str = "Aman kumar singh"
char_dict = {}

for i in str:
	if i in char_dict:
		char_dict[i] += 1
	else:
		char_dict[i] = 1
    

print(char_dict)
