#Write a recursive function to calculate the value of ’a’ to the power ’b’. For example, if a=2 and b=3, the output should be 2**3 = 8.
def power(n,i):
    if i == 1:
        return n
    else:
        return n*power(n,i-1)
print(power(2,3))