# PE problem 21 <AMICABLE NUMBERS>
# find the sum of Amicable numbers below 10000

import time
import math
from math import ceil

startTime = time.time()

def sumFactors(n):
    l =[]
    sums = 0
    for i in range(1, n+1):
        if n % i == 0 and i != n:
            l.append(i)
    sums = sum(l)
    return sums


def isAmicable(n):
    return sumFactors(sumFactors(n)) == n and sumFactors(n) != n

sumNum = 0
while True:
    for i in range(1,10001):
        if isAmicable(i):
            sumNum += i
        print(i, sumNum)



print("--- %s seconds ---" % (time.time() - startTime))
