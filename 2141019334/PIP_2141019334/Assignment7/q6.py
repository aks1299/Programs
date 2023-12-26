#Write a function that takes n as an input and creates a list of n lists such that ith list contains first five multiples of i.
n = int(input("Enter N : "))
lst = []
for i in range(n):
    ls = []
    for j in range(i):
        ls[j] = i * j
    lst[i] = ls
print(lst)