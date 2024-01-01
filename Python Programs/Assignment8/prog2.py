#Write a recursive function to print the sum of the digits of a given non-negative integer.
def dig_sum(n,sum):
    if(n == 0):
        print(sum)
    else:
        r = n % 10
        sum = sum + r
        n = n // 10
        return dig_sum(n,sum)
dig_sum(123,0)