#Write a recursive function to calculate the geometric sum of first n terms with constant ration r, where r lies in the interval (0,1). Note: In mathematics, a geometric series is a series with a constant ratio between successive terms. For example, if n = 4 and r = (1/2) then output should be (1+1/2+1/4+ 1/8 ) = 1.875
def sum_series(n,sum):
    if n == 0:
        return sum
    else:
        return 1/(2**(n-1))+sum_series(n-1,sum)
    
print(sum_series(4,0))