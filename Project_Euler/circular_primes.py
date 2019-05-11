# Project Euler problem 35 <CIRCULAR PRIMES>
import time
import math
from math import ceil

startTime = time.time()

def factors(n):
    factors = []
    for i in range(1, int(math.sqrt(n))+1):
        if n == 1:
            continue
        if n % i == 0:
            factors.append(i)
    return factors

def isPrime(n):
    return len(factors(n)) == 1

cnt = 0
for i in range(2, 1000000):
    if isPrime(i):
        string = str(i)
        isCircular = True
        m = len(string)
        for j in range(1,m):
            stringNew = string[j:] + string[:j]
            if not isPrime(int(stringNew)):
                isCircular = False
        if isCircular:
            cnt += 1
print(cnt)
