marks = int(input("Enter Marks : "))
if(marks >= 90 and marks <=100):
    print("A")
elif(marks >=70 and marks <=89):
    print("B")
elif(marks >=50 and marks <= 69):
    print("C")
elif(marks >= 40 and marks <= 49):
    print("D")
elif(marks <=39):
    print("F")
else:
    print("Invalid marks.")