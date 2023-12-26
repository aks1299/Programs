import pdb
pdb.set_trace()
def inv(n):
    for i in range(n,0):
        print("*"*i)
def main():
    n = int(input("Enter : "))
    inv(n)
if __name__ == "__main__":
    main()