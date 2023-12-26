def repSen(str):
    str = " "+str
    ss=''
    for i in range (0,len(str)):
        if(str[i] == " "):
            ss += str[i]
            ss += str[i+1].upper()
        else:
            if(str[i-1] == " "):
                continue
            ss += str[i]
    return ss

s= input("Enter string : ")
print(repSen(s))
