# PE problem 4 <LARGEST PALINDROME PRODUCT>
# find the largest Palindrome made from the product of two 3-digit numbers

def isPalindrome(number):
    return str(number) == str(number)[::-1]

def largestPalindrome():
    largest = 0
    for i in range(100, 999):
        for j in range(i+1,1000):
            product = i * j
            if isPalindrome(product) and product > largest:
                largest = product
    return largest


print(largestPalindrome())
