# PE problem 23 <NON-ABUNDANT SUMS>
#Find the sum of all numbers which is not the sum of two abundant numbers
import time
import math
from math import ceil

startTime = time.time()

def sumDivisors(n):
    result = 0
    temp = math.sqrt(n)
    for i in range(1, int(temp)+1):
        if n % i == 0:
            result += i + n/i
            if temp == int(temp) and i == temp:
                result -= i
    result -= n
    return result


abun = set()

for num in range(12,28123):
    if num < sumDivisors(num):
        abun.add(num)

numbers = set(range(28123))
for i in abun:
    for j in abun:
        if i+j in numbers:
            numbers.remove(i+j)

print(sum(numbers))


print("--- %s seconds ---" % (time.time() - startTime))
