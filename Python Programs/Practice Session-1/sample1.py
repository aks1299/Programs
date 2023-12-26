list3 = [(x * 2) for x in range(1, 11)]
print(list3)

del list3[1:]
print(list3)

list4 = [ x+y for x in range(1,5) for y in range(1,5)]
print(list4)