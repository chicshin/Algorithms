# PE problem 14 <LONGEST COLLATZ SEQUENCE>
# find the longest chain under one million (Collatz Problem)

import time
import math
from math import ceil

startTime = time.time()

def collatz(n):
    if n == 1:
        return 1
    if n % 2 == 0:
        n = n//2
        return 1 + collatz(n)
    n = 3*n +1
    return 1 + collatz(n)

currents = 0
for i in range(1,1000000):
    count = collatz(i)
    if count > currents:
        currents = count
        print(i, count)


print("--- %s seconds ---" % (time.time() - startTime))
