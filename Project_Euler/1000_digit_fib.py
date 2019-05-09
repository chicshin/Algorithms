# PE problem 25 <1000-DIGIT FIBONACCI NUMBER>
#Find the index of fibonacci number which contains 1000 digits
import time
import math
from math import ceil

startTime = time.time()

def getFibonacci():
    limit = 1000
    cnt = 2
    fibs = [1,1]
    while len(str(fibs[-1])) < limit:
        fibs.append(fibs[-2]+fibs[-1])
        cnt += 1
    print(cnt, fibs[-1])

getFibonacci()


print("--- %s seconds ---" % (time.time() - startTime))
