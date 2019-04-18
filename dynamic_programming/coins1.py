"""
credit: acmicpc #2293
"""
import sys

T, p = map(int, sys.stdin.readline().split(" "))

coins = [0] * T
dp = [1] + ([0] * (p))

for t in range(T):
     coins[t] = int(sys.stdin.readline())
     for j in range(coins[t],p+1):
        dp[j] += dp[j-coins[t]]
print(dp[-1])
