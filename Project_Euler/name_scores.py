# PE problem 22 <NAMES SCORES>
# find the total of all name scores in file

import time
import math
from math import ceil

startTime = time.time()

with open('p022_names.txt') as data:
    contents = data.read().replace('"','').split(',')

contents.sort()

grandTotal = 0
for idx,val in enumerate(contents):
    total = 0
    for i in val:
        total = total + ord(i)-64
    grandTotal += total*(idx+1)
print(grandTotal)



print("--- %s seconds ---" % (time.time() - startTime))
