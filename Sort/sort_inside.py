"""
credit: acmicpc #1427
"""
import sys

n = [x for x in sys.stdin.readline().strip()]
high = len(n)
def quicksort(list, low, high):
    if (high - low) > 0:
        p = partition(list, low, high)
        quicksort(list, low, p-1)
        quicksort(list, p+1, high)

def partition(list, low, high):
    divider = low
    pivot = high

    for i in range(low, high):
        if list[i] > list[pivot]:
            list[i], list[divider] = list[divider], list[i]
            divider += 1
    list[divider], list[pivot] = list[pivot], list[divider]
    return divider

quicksort(n, 0, high-1)

print("".join(n))
