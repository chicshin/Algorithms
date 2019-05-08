# PE problem 12 <HIGHLY DIVISIBLE TRIANGULAR NUMBER>
# find the value of triangle number that has over five hundred divisors

import time
import math
from math import ceil

startTime = time.time()

##def getFactors():
##    lists = [1]
##    number = 1
##    factors = []
##    counts = 0
##    n = 0
##
##    while counts < 250:
##        number += 1
##        lists.append(lists[-1]+number)
##        for i in lists:
##            factors = []
##            counts = 0
##            for factor in range(1,int(math.sqrt(i))+1):
##                if i % factor == 0:
##                    factors.append(factor)
##                    counts += 1
##                    if counts > 250:
##                        return i
##                        break
##        print(i,factors)

def getFactors(x):
    cnt = 0
    rt = math.sqrt(x)
    if rt == int(rt):
        cnt = 1
    rt = math.ceil(rt)
    for a in range(1,rt):
        if x % a == 0:
            cnt += 2
    return cnt

i = 0
while True:
    if getFactors(i*(i+1)/2) > 500:
        print(i*(i+1)/2)
        break
    i += 1


print("--- %s seconds ---" % (time.time() - startTime))
