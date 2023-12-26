#Write a function that takes a list of numbers as input from the user and produces the corresponding cumulative list where each element in the list at index i is the sum of elements at index j <= i.
list = eval(input("Enter List : "))
prev = []
cs = 0

for i in range(len(list)):
    for j in range(i+1):
        cs += list[j]
    prev.append(cs)
    cs = 0

print(prev)
