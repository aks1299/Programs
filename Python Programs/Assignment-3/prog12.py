for i in range(5):
    for j in range(i):
        print(j+1,end=" ")
    print()
print()
for i in range(1,5):
    for k in range(i,4):
        print(" ",end=" ")
    for j in range(i,0,-1):
        print(j,end=" ")
    for l in range(1,i):
        print(l+1,end=" ")
    print()
print()
for i in range(5,0,-1):
    for j in range(i,0,-1):
        print(j,end = " ")
    print()
print()
for i in range(6):
    for j in range(i):
        print(i,end = " ")
    print()
print()
for i in range(5):
    for j in range(5):
        if(i<=j):
            print(j+1,end= " ")
        else: 
            print(" ",end = " ")
    print()
print()
for i in range(5):
    for j in range(5):
        if(i == 0 or i == 4 or j == 0 or j == 4):
            print("*",end = " ")
        else:
            print(" ",end= " ")
    print()
print()
for i in range(5):
    for j in range(5):
        print("*",end = " ")
    print()
print()
for i in range(1,5):
    for k in range(i,4):
        print(" ",end=" ")
    for j in range(i,0,-1):
        print("*",end=" ")
    for l in range(1,i):
        print("*",end=" ")
    print()
print()
