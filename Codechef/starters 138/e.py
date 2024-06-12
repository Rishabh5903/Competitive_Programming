from sys import stdin, stdout

input = stdin.readline
from math import pow
def sieve(n):
    is_prime = [True] * (n + 1)
    p = 2
    while (p * p <= n):
        if is_prime[p]:
            for i in range(p * p, n + 1, p):
                is_prime[i] = False
        p += 1
    primes = [p for p in range(2, n + 1) if is_prime[p]]
    return primes

primes = sieve(10**5)
prime_squares = [pow(p,2) for p in primes]

def can_sum_to_n(n):
    squares_set = set(prime_squares)
    length = len(prime_squares)
    for i in range(length):
        for j in range(i + 1, length):
            required = n - (prime_squares[i] + prime_squares[j])
            if required in squares_set and required != prime_squares[i] and required != prime_squares[j]:
                return True
    return False

T = int(input().strip())
results = []
for _ in range(T):
    N = int(input().strip())
    if can_sum_to_n(N):
        results.append("YES")
    else:
        results.append("NO")

stdout.write("\n".join(results) + "\n")
