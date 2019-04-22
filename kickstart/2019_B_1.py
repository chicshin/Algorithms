"""
Kickstart Round B #1 2019
"""
import sys

class Solution:
    def __init__(self, s):
        self.s = s
        self.arr = [[0]*26 for _ in range(len(s))]

        counter = [0] * 26
        for i, char in enumerate(s):
            counter[ord(char) - ord('A')] += 1
            for k in range(26):
                self.arr[i][k] = counter[k]

    def solve(self, l, r):
        if l == 1:
            lo = [0] * 26
        else:
            lo = self.arr[l-2]
        hi = self.arr[r-1]

        res = [hi[k] - lo[k] for k in range(26)]
        length = r - l + 1

        if length % 2 == 0:
            return all(c % 2 == 0 for c in res)
        else:
            odd = 0
            for c in res:
                if c % 2 == 1:
                    odd += 1
            return odd == 1

T = int(sys.stdin.readline())
for t in range(T):
    N, Q = list(map(int, sys.stdin.readline().split(" ")))
    s = sys.stdin.readline().strip()
    solution = Solution(s)
    total = 0
    for _ in range(Q):
        l, r = list(map(int, sys.stdin.readline().split(" ")))
        if solution.solve(l, r):
            total += 1
    print("Case #{}: {}".format(t+1, total))
