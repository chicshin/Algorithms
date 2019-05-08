# PE problem 16 <POWER DIGIT SUM>
# find the sum of digits of 2^1000

import time
import math
from math import ceil

startTime = time.time()

def sums(n):
    sums = 0
    strings = str(2**n)
    for i in range(len(strings)):
        sums += int(strings[i])
    return sums

#simplest one liner solution
#print(sum(int(x) for x in str(2**1000)))

print(sums(1000))

print("--- %s seconds ---" % (time.time() - startTime))
