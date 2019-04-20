"""
credit: acmicpc #2167
"""
import sys

N, M = list(map(int, sys.stdin.readline().split(" ")))
ll = [[0]*(M+1)]
dp = [[0]*(M+1)]
for n in range(N):
    ll.append([0] + list(map(int, sys.stdin.readline().split(" "))))
K = int(sys.stdin.readline())

for i in range(1, N+1):
    p = [0]
    matrix = [0]
    for j in range(1, M+1):
        p += [ll[i][j] + p[j-1]]
        matrix.append(p[j] + dp[i-1][j])
    dp = dp + [matrix]

for k in range(K):
    i, j, x, y = list(map(int, sys.stdin.readline().split(" ")))
    result = dp[x][y] - dp[x][j-1] - dp[i-1][y] + dp[i-1][j-1]
    print(result)
