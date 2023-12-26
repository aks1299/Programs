def anagram(str1,str2):
    if(sorted(str1.lower()) == sorted(str2.lower())):
        return True
    else:
        return False

s1 = input("Enter the first String : ")
s2 = input("Enter the second String : ")
print(anagram(s1,s2))
