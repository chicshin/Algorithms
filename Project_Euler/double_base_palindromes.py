# Project Euler problem 36 <DOUBLE-BASE PALINDROMES>
import time
import math
from math import ceil

startTime = time.time()

def isPalindrome(string):
    if string == string[::-1]:
        return True

sums = 0
for i in range(1,10**6):
    if isPalindrome(str(i)) and isPalindrome(str(bin(i))[2:]):
        sums += i
print(sums)

print("--- %s seconds ---" % (time.time() - startTime))
