from sys import stdin, stdout

input = stdin.readline

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
prime_squares = [p**2 for p in primes]
prime_squares_set = set(prime_squares)

def can_sum_to_n(n):
    for i in range(len(prime_squares)):
        for j in range(i + 1, len(prime_squares)):
            remainder = n - (prime_squares[i] + prime_squares[j])
            if remainder in prime_squares_set and remainder != prime_squares[i] and remainder != prime_squares[j]:
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
