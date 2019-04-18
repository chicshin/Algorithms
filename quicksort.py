# list = [1,0,2,3,4,8,5,10,9,7,2,3,12,6,9]

low = 0
high = len(list) - 1

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
quicksort(list, low, high)

print(list)
