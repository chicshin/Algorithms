"""
credit: acmicpc #9461
"""
# 1, 1, 1, 2, 2, 3, 4, 5, 7, 9
import sys

T = int(sys.stdin.readline())

for t in range(T):
    n = int(sys.stdin.readline())
    dp = [1,1,1] + [0] * (n-2)
    for i in range(3,n):
        dp[i] = dp[i-3] + dp[i-2]

    print(dp[n-1])
