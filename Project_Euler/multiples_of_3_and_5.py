# From project euler problem #1
# find the sum of all all multiples of 3 or 5 below 1000

def sumMultiples(number):
    sums = 0
    for i in range(1, number):
        if i % 3 == 0 or i % 5 == 0:
            sums += i
    return sums

print(sumMultiples(1000))
