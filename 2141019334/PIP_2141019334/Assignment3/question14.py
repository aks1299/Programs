def isPalindrome(x):
    if (x == x[::-1]):
        return True
    else:
        return False


print(isPalindrome("racecar"))
print(isPalindrome("aman"))
