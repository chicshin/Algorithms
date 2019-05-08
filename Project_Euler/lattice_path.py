# PE problem 15 <LATTICE PATHS>
# find the number of routes in 20 x 20 grid

import time
import math
from math import ceil

startTime = time.time()

# 2n!/(n!*n!)

def routes(n):
    bottomFact = 1
    top = 1
    for i in range(1,n+1):
        bottomFact *= i
        bottom = bottomFact ** 2
    for j in range(1, 2*n +1):
        top *= j

    return top//bottom

print(routes(20))


print("--- %s seconds ---" % (time.time() - startTime))
