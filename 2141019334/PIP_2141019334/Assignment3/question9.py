def max(n,n1,n2):
    def max2(n1,n2):
        if n1 >= n2:
            maxno = n1
        else:
            maxno = n2
        return maxno
    maxi = max2(max2(n,n1),n2)
    print(maxi)
max(12,33,2)