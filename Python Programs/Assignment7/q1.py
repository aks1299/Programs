#Write a function that takes a list of values as input parameter and returns another list without any duplicates.
list = eval(input("Enter List : "))
unq = []

for i in list:
    if i not in unq:
        unq.append(i)
    else:
        pass
print(unq)