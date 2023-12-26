import re
s = input("Enter the string : ")
s1 = re.findall(r"\w+",s)
print("Number of words : ",len(s1))
