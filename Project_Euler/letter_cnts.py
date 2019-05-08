# PE problem 17 <NUMBER LETTER COUNTS>
# how many letters would be used from 1 to 1000

import time
import math
from math import ceil

startTime = time.time()

c1 = [3,3,5,4,4,3,5,5,4]
c2 = [3,6,6,8,8,7,7,9,8,8]
c3 = [6,6,5,5,5,7,6,6]
c4 =[7,3,8]

s1 = sum(c1)*9 + sum(c2) + sum(c3)*10
s2 = s1*9 + sum(c1)*99 + sum(c4[:2])*99*9
s3 = sum(c1) +c4[0]*9 +c1[0] +c4[2]
print(s1 + s2 + s3)

print("--- %s seconds ---" % (time.time() - startTime))
