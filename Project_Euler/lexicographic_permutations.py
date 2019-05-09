# PE problem 24 <LEXICOGRAPHIC PERMUTATIONS>
#Find the sum of all numbers which is not the sum of two abundant numbers
import time
import math
from math import ceil

startTime = time.time()


def permutation(string):
    i = len(string)-2

    while i >= 0:
        if string[i] < string[i+1]:
            target = sorted(string[i:])
            newNum = target.pop(target.index(string[i])+1)
            lastNums = ''.join(target)
            return string[:i] + newNum + lastNums
        i -= 1

string = '0123456789'

for i in range(1,1000000):
    string = permutation(string)

print(string)



print("--- %s seconds ---" % (time.time() - startTime))
