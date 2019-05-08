# PE problem 7 <10001st PRIME>
# find the 10001st prime number

def getPrime():
    criteria = 10001
    number = 2
    primes =[]
    while len(primes) < criteria:
        if all(number%prime for prime in primes):
            primes.append(number)
        number += 1
    return primes[-1]

print(getPrime())
