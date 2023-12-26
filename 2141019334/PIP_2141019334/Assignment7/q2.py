#Write a function that takes a list of numbers as input from the user and produces the corresponding cumulative list where each element in the list at index i is the sum of elements at index j <= i.
lst = eval(input("Enter List : "))
cumulative_lst = []

for i in range(len(lst)):
    cumulative_sum = 0
    for j in range(i+1):
        cumulative_sum += lst[j]
    cumulative_lst.append(cumulative_sum)
    
print(cumulative_lst)
