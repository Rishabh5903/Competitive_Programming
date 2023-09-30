def count_fibonacci_like_sequences(n, k):
    MOD = 10**9 + 7

    if k <= 2:
        return 0 if k == 1 or k == 0 else 1

    a, b = 0, 1  # Initialize the first two elements of the sequence
    for _ in range(2, k):
        a, b = b, (a + b) % MOD  # Calculate the next Fibonacci number

    # If n is not a valid Fibonacci sum, there are no sequences
    if n != (a + b) % MOD:
        return 0

    # Calculate the number of valid sequences for n, k
    count = 1
    for _ in range(k - 2):
        a, b = b, (a - b) % MOD
        count = (count * b) % MOD

    return count


# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    n, k = map(int, input().split())
    result = count_fibonacci_like_sequences(n, k)
    print(result)
