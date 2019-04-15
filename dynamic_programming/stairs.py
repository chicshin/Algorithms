"""
Original problem: acmicpc # 2579
Consider the following rules before stepping on stairs:
    1. you may step on one or two stairs at once.
    2. you should not step on three consecutive stairs.
    3. you should step on the last stair.
Each steps has its own score. Find the maximum score.
Input n is number of stairs.
Input p is score given on each stairs.
"""
import sys

n = int(sys.stdin.readline())

stairs = []
for k in range(n):
    stairs.append(int(sys.stdin.readline()))

memo = [0] * n
memo[0] = stairs[0]
memo[1] = memo[0] + stairs[1]
memo[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2])

for i in range(3,n):
    memo[i] = max(memo[i-2] + stairs[i],  memo[i-3] + stairs[i-1] + stairs[i])
print(memo[n-1])

"""
A minor improvement in running time with memoization than using append method.
"""
