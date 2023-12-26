n = int(input("Enter sound level : "))
if(n == 130):
    print("Jackhammer sound level.")
elif(n == 106):
    print("Gas Lawnmower sound level.")
elif(n == 70):
    print("Alarm clock sound level.")
elif(n == 40):
    print("Quiet room sound.")
elif(n > 106 and n < 130):
    print("Between Jackhammer and gas lawnmower sound.")
elif(n > 70 and n < 106 ):
    print("Between Gas lawnmower and Alarm Clock")
elif(n > 40 and n < 70):
    print("Between Alarm Clock and Quiet Room")
elif(n <= 40):
    print("Less than quiet room")
elif(n > 130):
    print("More than Jackhammer sound")
else:
    print("Invalid")
