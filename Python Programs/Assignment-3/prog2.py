h = input("Enter human years: ")

if h.isnumeric() and float(h) >= 0:
    h = float(h)
    if h <= 2:
        d = 10.5 * h
    else:
        d = 10.5 * 2 + 4 * (h - 2)
    print(f"{h} human years is equivalent to {d} dog years.")
else:
    print("Error: Please enter a valid non-negative number.")
