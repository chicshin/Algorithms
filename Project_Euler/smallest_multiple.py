# PE problem 5 <SMALLEST MULTIPLE>
# find the smallest number that is evenly divisible by all of the values from 1 to 20

import math


# method 1 (slow)

##def isDivisible(number):
##    for i in range(1, 21):
##        if number % i != 0:
##            return False
##    return True
##
##def SmallestNumber():
##    initial = 46189
##    while True:
##        if isDivisible(initial):
##            break
##        initial += 1
##    return initial
##
##print(SmallestNumber())


#method 2 (fast)

initial =  1
for i in range(1,21):
    gcd = math.gcd(initial,i)
    initial = int(initial*i/gcd)
    print(i,initial)
