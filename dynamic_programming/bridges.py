"""
Original problem: acmicpc #1010
"""
import sys

t = int(sys.stdin.readline())

for i in range(t):
    n, m = list(map(int, sys.stdin.readline().split(" ")))
    a = 1
    b = 1
    for i in range(n):
        a *= (m-i)
        b *= (n-i)
    print(a//b)
