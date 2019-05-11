# Project Euler problem 37 <TRUNCATABLE PRIMES>
import time
import math
from math import ceil

startTime = time.time()

def isPrime(n):
    if n == 1 or n == 0:
        return False
    loop = pow(n,0.5)
    i = 2
    while i <= loop:
        if n % i == 0:
            return False
        i += 1
    return True

def isTrunc(n):
    string = str(n)
    for i in range(1,len(string)):
        if not (isPrime(int(string[:i])) and isPrime(int(string[i:]))):
            return False
    return True

cnt = 0; total = 0;number= 10
while number < 1000000:
    if isPrime(number) and isTrunc(number):
        cnt += 1; total += number
        print(number,cnt)
    if cnt == 11:
        break
    number += 1
print(total)

print("--- %s seconds ---" % (time.time() - startTime))
