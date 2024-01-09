N_PRIMES = 50
number = 2
count = 0

while count < N_PRIMES:
    divisor = 2
    prime = True
    while divisor < number:
        if number % divisor == 0:
            prime = False
            break
        divisor += 1
    if prime == True:
        count += 1
        print(number, end=" ")
    number += 1
