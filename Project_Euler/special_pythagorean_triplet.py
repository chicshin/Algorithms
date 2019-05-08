# PE problem 9 <SPECIAL PYTHAGOREAN TRIPLET>
# find abc of the special pythagorean triplet for which a+b+c = 1000

def pythagorean():
    for c in range(1, 1000):
        for b in range(c):
            for a in range(b):
                if c**2 == a**2 + b**2 and a+b+c == 1000:
                    return a*b*c

print(pythagorean())
