def convert_base(num, ip, op):
    if not (2 <= ip <= 16 and 2 <= op <= 16):
        return "Base must be between 2 and 16 "
    dec = int(num, ip)
    dig = "0123456789ABCDEF"
    if dec == 0:
        return "0"
    out = ""
    while dec > 0:
        digit = dec % op
        out = dig[digit] + out
        dec //= op
    return out

num = input("Enter a number: ")
ip = int(input("Enter the base of the input number: "))
op = int(input("Enter the base of the out number: "))
result = convert_base(num, ip, op)
print("The base",ip," num ",num," is equivalent to the base",op," number " ,result)
