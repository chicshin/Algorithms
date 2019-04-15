"""
Original problem: acmicpc # 9095
Use summation of 1, 2 and 3 to express interger N.
Find the number of ways to make N.
"""
import sys

n = int(sys.stdin.readline())

for k in range(n):
    p = int(sys.stdin.readline())

    memo = [0,1,2,4] + [0]*(p-3)

    for i in range(4,p+1):
        memo[i] = memo[i-1] + memo[i-2] + memo[i-3]

    print(memo[p])
