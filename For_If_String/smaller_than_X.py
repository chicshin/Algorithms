"""
ACMICPC #10871
list all numbers smaller than a given number p.
"""

import sys
n, p=map(int, sys.stdin.readline().split(" "))
score=[x for x in map(str, sys.stdin.readline().split(" ")) if int(x)<p]
print(' '.join(score))
