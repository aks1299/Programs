#Write a recursive function to calculate the sum of the positive integers of n+(n-2)+(n- 4)... (until n − x ≤ 0). For example, if n=6, then output should be 6+(6-2)+(6-4)+(6-6) = 12
def sumxes(n,sum):
    if n == 0:
        return sum
    else:
        return (n-2)+sumxes(n-2,sum)
print(sumxes(6,0))