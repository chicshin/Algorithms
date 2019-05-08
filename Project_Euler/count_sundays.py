# PE problem 19 <COUNTING SUNDAYS>
# count sundays from 1901.01.01 - 2000.12.31

import time
import math
from math import ceil

startTime = time.time()

#count all days from 1901.01.01. - 2000.12.31
def countSundays():
    month = [31,28,31,30,31,30,31,31,30,31,30,31]
    start = 2 #Tuesday 1901.01.01
    count = 0
    for year in range(1901,2001):
        if year % 4 ==0:
            if year % 100 == 0 and year % 400 !=0:
                month[1] = 29
        else:
            month[1] = 28
        for days in month:
            sumdays = start + days
            start = sumdays % 7
            if start == 0:
                count += 1
    print(count)

countSundays()



print("--- %s seconds ---" % (time.time() - startTime))
