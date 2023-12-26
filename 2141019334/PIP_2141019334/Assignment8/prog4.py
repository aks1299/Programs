#Write a recursive function to calculate the harmonic sum of first n terms. Note: The harmonic sum is the sum of reciprocals of the positive integers. For example, if n = 4, the output should be (1+1/2+1/3+1/4 ) = 2.0833
def sum_series(n,sum):
    if n == 0:
        return sum
    else:
        return (1/n)+sum_series(n-1,sum)
    
print(sum_series(4,0))
