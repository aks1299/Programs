import re

string1 = "Welcome to Python shell"
match = re.search("(p|P)ython", string1)
print(match.group())

s = "Python Shell"
match = re.search("Shel*",s)
print(match.group())

s = "Python Shelllll"
match = re.search("Shel{1,2}",s)
print(match.group())

match = re.findall(r"[A-Za-z]+ing", "Walking down the road, he was thinking about the coming years.")
print(match)

for i in re.finditer(r"[A-Za-z]+ing", "Walking down the road, he was thinking about the coming years."):
    print(i.group())


message = "Python:Python is an interactive language. It is developed by Guido Van Rossum"
words = re.findall("\w+", message)
print(len(words))
print(words)
