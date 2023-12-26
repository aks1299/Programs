import random

def genP():
    len = random.randint(7, 10)
    password = ""
    for i in range(len):
        password += chr(random.randint(33, 126))
    return password

print("Your randomly generated password is: ",genP())
