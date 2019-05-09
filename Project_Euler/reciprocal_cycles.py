# PE problem 26 <RECIPROCAL CYCLES>
# get the longest recurring cycle 1/d, d < 1000
import time
import math
from math import ceil
from decimal import *

startTime = time.time()

#Solution 1
def getCycle(string):
    length = len(string)
    for i,v in enumerate(string):
        end = int(string.find(v,i+1))
        while end != -1 and end < length*0.5:
            target = string[i:end]
            targetLen = end-i
            test = string[end:end+targetLen]
            if target == test and string.count(target)*targetLen > length*0.9:
                return target
            else:
                end = int(string.find(v,end+1))

decimalSize = 2000
getcontext().prec = decimalSize
maxLen = 0
for d in range(1,1000):
    string =  str(Decimal(1)/Decimal(d))
    string = string[string.find(".")+1:]
    cycle = getCycle(string)
    if not cycle == None and len(cycle)>maxLen:
        maxLen = len(cycle)
        print(d, maxLen)

#Solution 2
def perlen(a):
    t=1
    list=[]
    tmp=-1
    while(t!=0):
        t=(t*10)%a
        if(t in list):
            tmp=t
            break
        list.append(t)
    if(tmp==-1):
        return 0
    for i in range(len(list)):
        if(tmp==list[i]):
            A=i
            return(len(list)-A)
longest=0
d=0
for i in range(1, 1000):
    length=perlen(i)
    if(length>longest):
        longest=length
        d=i

print(d)
print("--- %s seconds ---" % (time.time() - startTime))
