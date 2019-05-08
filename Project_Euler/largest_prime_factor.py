# PE problem 3 <Largest Prime Factor>
# find the largest prime factor of 600851475143

import math

def getFactors(number):
    factors =[]

    for i in range(1, int(math.sqrt(number))+1):
        if number % i == 0:
            factors.append(i)
            factors.append(number//i)
    return sorted(factors)

def isPrime(number):
    return len(getFactors(number)) == 2

print(getFactors(13195))

def largestPrime(number):
    largest = 0
    for factor in getFactors(number):
        if isPrime(factor):
            largest = factor
    return largest

print(largestPrime(600851475143))
