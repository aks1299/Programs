address = "B-6, Lodhi road, Delhi"
list1 = [1, 2, 3]
list2 = ["a", 1, "z", 26, "d", 4]
tuple1 = ("a", "e", "i", "o", "u")
tuple2 = ([2,4,6,8], [3,6,9], [4,8], 5)
dict1 = {"apple": "red", "mango": "yellow", "orange": "orange"}
dict2 = {"X": ["eng", "hindi", "maths","science"], "XII": ["english", "physics",
"chemistry", "maths"]}
#1
#list1[3] = 4
#2
print(list1 * 2)
#3
#print(min(list2))
#4
print(max(list1))
#5
print(list(address))
#6
list2.extend(["e", 5])
print(list2)
#7
list2.append(["e", 5])
print(list2)
#8
names = ["rohan", "mohan", "gita"]
names.sort(key= len)
print(names)
#9
list3 = [(x * 2) for x in range(1, 11)]
print(list3)
#10
del list3[1:]
print(list3)
#11
list4 = [ x+y for x in range(1,5) for y in range(1,5)]
print(list4)
#12
# tuple2[3] = 6
# #13
# tuple2.append(5)
# #14
# t1 = tuple2 +(5)
#15
",".join(tuple1)
#16
list(zip(["apple", "orange"], ("red","orange")))
#17
dict2["XII"]
#18
dict2["XII"].append("computer science"),dict2
#19
"red" in dict1
#20
list(dict1.items())
#21
list(dict2.keys())
#22
dict2.get("XI", "None")
#23
dict1.update({"kiwi":"green"})
print(dict1)
