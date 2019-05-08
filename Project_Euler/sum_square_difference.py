# PE problem 6 <SUM SQUARE DIFFERENCE>
# find the difference between squareSums and sumSquares of first one hundred numbers

def squareSums(number):
    sums = 0
    for i in range(1, number+1):
        sums += i
    return sums ** 2

def sumSquares(number):
    sums = 0
    squares = 1
    for i in range(1, number+1):
        sums += i ** 2
    return sums

print(squareSums(100) - sumSquares(100))
