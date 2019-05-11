# Project Euler problem 32 <PANDIGITAL PRODUCTS>
# find sum of all products that is pandigital number of 1 to 9
import time
import math
from math import ceil

startTime = time.time()


#find all products

def products():
    a = 1
    b = 1
    l = []

    for a in range(2,100): # minimum digit of 'a' (2 * 3 = 4),10*100 = 1000
        for b in range(a+1,9999): # maximum digit of 'b' (1 * 4 = 4), 1 *1000 = 1000,  upto 4 digits = 9999
            p = a * b
            string = str(a)+str(b)+str(p)
            if sorted(set(string))==['1','2','3','4','5','6','7','8','9'] and p % 10 != 0 and len(string)==9:
                l.append(p)
                print(a,b,p)
            if p > 100000: # p shouldn't excced 99*999 = 98901
                break
    return sum(set(l))

print(products())
