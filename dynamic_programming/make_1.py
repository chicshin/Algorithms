"""
Original problem: acmicpc # 1463

There are three computations that can be applied to interger X.
    1. if X is divisible by 3, divide the number by 3
    2. if X is divisibile by 2, divide the number by 2.
    3. subtract 1
With the given interger N, make the number down to 1 by properly using those computations above.

Goal: Find the minimun number of paths to compute.
"""

import sys

n = int(sys.stdin.readline())
memo = [0,0,1,1]

for i in range(4, n+1):
    memo.append(memo[i-1]+1)
    if i % 2 == 0:
        memo[i] = min(memo[i], memo[i//2]+1)
    if i % 3 == 0:
        memo[i] = min(memo[i], memo[i//3]+1)
print(memo[n])
