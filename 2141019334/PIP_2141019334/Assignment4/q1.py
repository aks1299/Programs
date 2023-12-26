import pdb
pdb.set_trace()
def sum(n):
    t = 0
    for i in range(1,n+1):
        t += i
    return t
def main():
    n = int(input("Enter number of terms : "))
    t = sum(n)
    print("sum of 1st", n,"pos int. ", t)
if __name__ == "__main__":
    main()