def hex2int(hex):

    hex = hex.upper()
    if hex not in "0123456789ABCDEF":
        print("Invalid hexadecimal digit")
        return None
    dec = 0
    if hex.isdigit():
        dec = int(hex)
    else:
        dec = ord(hex) - 55
    return dec

def int2hex(dec):
    
    if dec < 0 or dec > 15:
        print("Decimal integer must be between 0 and 15")
        return None
    if dec < 10:
        return str(dec)
    else:
        return chr(dec + 55)

hex = "B"
dec = hex2int(hex)
if dec != None:
    print("The decimal equivalent of ",hex," is ",dec)

dec = 14
hex = int2hex(dec)
if hex != None :
    print("The hexadecimal equivalent of ",dec," is ",hex)
