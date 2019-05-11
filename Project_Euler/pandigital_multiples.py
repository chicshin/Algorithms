# Project Euler problem 38 <PANDIGITAL MULTIPLES>
import time
import math
from math import ceil

startTime = time.time()

def isPandigital(n):
    if sorted(set(n)) == ['1','2','3','4','5','6','7','8','9'] and len(n)==9:
        return True

n = 1;
largest = 0

while n > 0:
    numList =[]
    for i in range(1,10):
        i = i * n
        numList.append(i)
        string = "".join(map(str,numList))
        current = int(string[:9])

    if isPandigital(string[:9]) and largest < current:
        largest = current
        print(largest,n)
    if n > 10000:
        break
    n += 1



print("--- %s seconds ---" % (time.time() - startTime))
