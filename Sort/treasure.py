"""
credit: acmicpc #1026
"""
import sys

T = int(sys.stdin.readline())

A = list(map(int, sys.stdin.readline().split(" ")))
B = list(map(int, sys.stdin.readline().split(" ")))

def quicksort(list, low, high):
    if (high - low) > 0:
        p = partition(list, low, high)
        quicksort(list, low, p-1)
        quicksort(list, p+1, high)

def partition(list, low, high):
    divider = low
    pivot = high

    for i in range(low, high):
        if list[i] < list[pivot]:
            list[i], list[divider] = list[divider], list[i]
            divider += 1
    list[divider], list[pivot] = list[pivot], list[divider]
    return divider

quicksort(A, 0, T-1)
quicksort(B, 0, T-1)

B.reverse()
sum = 0
for i in range(T):
    sum += A[i]*B[i]
print(sum)
