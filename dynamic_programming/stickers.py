"""
Credit: acmicpc #9456
"""
# 2
# 5
# 50 10 100 20 40
# 30 50 70 10 60
import sys

T = int(sys.stdin.readline())

for t in range(T):
    score = []
    dp = []
    n = int(sys.stdin.readline())
    for i in range(2):
        p = score.append(list(map(int, sys.stdin.readline().split(" "))))
        dp.append([0] * n)

    dp[0][0] = score[0][0]
    dp[1][0] = score[1][0]
    
    if n == 1:
        print(max(dp[0][0], dp[1][0]))

    else:

        dp[0][1] = dp[1][0] + score[0][1]
        dp[1][1] = dp[0][0] + score[1][1]

        for i in range(2, n):
            dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + score[0][i]
            dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + score[1][i]

        print(max(dp[0][n-1],dp[1][n-1]))
