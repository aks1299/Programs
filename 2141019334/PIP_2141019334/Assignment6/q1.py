def make2Star(str):
    ss = ''
    rs = ''
    for i in str:
        if(i == ss):
            rs += "*"
        else:
            rs += i    
        ss = i
    return rs

s = input("Enter String : ")
print ("String is: ",make2Star(s))