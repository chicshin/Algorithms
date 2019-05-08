# PE problem 20 <FACTORIAL DIGIT SUM>
# find the sum of digits of 100!

import time
import math
from math import ceil

startTime = time.time()

def factorization(n):
    factz = 1
    for i in range(1,n+1):
        factz *= i
    return factz

def sumDigits(n):
    sums = 0
    digits = [int(x) for x in str(factorization(n))]
    for digit in digits:
        sums += digit
    return sums

print(sumDigits(100))



print("--- %s seconds ---" % (time.time() - startTime))
