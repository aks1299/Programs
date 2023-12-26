#Write a function that takes a list of values as input parameter and returns another list without any duplicates.
lst = eval(input("Enter list : "))
unique_lst = []

for i in lst:
    if i not in unique_lst:
        unique_lst.append(i)
    
print("Unique elements are : ",unique_lst)


