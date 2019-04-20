"""
credit: acmicpc #11057
"""

import sys

N = int(sys.stdin.readline())

def dp(N):
    dp = [[10,9,8,7,6,5,4,3,2,1]]
    if N == 1:
        return 10
    for i in range(1,N):
        dp.append([0]*10)
        dp[i][0] = sum(dp[i-1])
        for j in range(1, 10):
            dp[i][j] = dp[i][j-1] - dp[i-1][j-1]
    return dp[i][0]%10007

print(dp(N))
