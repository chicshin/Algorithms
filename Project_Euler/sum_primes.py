# PE problem 10 <SUMMATION OF PRIMES>
# find the sum of all primes below two million

import time
from math import ceil

startTime = time.time()

def isPrime(number):
    top = int(ceil(number**0.5))
    for i in range(3, top+1,2):
        if number % i == 0:
            return False
    return True

def primes(max=10):
    yield 2
    current = 3
    primes = []
    while current < max:
        if isPrime(current):
            yield current
        current += 2

print(sum(primes(2000000)))


print("--- %s seconds ---" % (time.time() - startTime))
