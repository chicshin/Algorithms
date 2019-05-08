# PE problem #2 <Even Fibonacci numbers>
# find the sum of even-valued Fibonacci numbers whose value doesn't exceed four million

def getFibonacci():
    series = [1,2]
    while series[-1] < 4000000:
        series.append(series[-1]+series[-2])
    del series[-1]
    return series

def sumEvens():
    sums = 0
    for i in getFibonacci():
        if i % 2 == 0:
            sums += i
    return sums

print(sumEvens())
