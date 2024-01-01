#Write a recursive function that converts a number inputted in string form to an integer type. For example, if input string is: ‘1234’ then the recursive function should convert it to 1234(int type).
def type_int(n,num):
    if n == "":
        return num
    else:
        num = num*10 + int(n[0])
        n1 = n.replace(n[0],"")
        return type_int(n1,num)
x = type_int("123",0)
print(x) 