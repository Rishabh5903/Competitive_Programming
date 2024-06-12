import math

def get_min_distinct_chars(n):
    # Calculate the distinct factors of n/2
    factors = set()
    for i in range(1, int(math.sqrt(n // 2)) + 1):
        if (n // 2) % i == 0:
            factors.add(i)
            factors.add((n // 2) // i)

    factors = sorted(factors)

    # Generate the string with distinct characters
    result = []
    for factor in factors:
        for i in range(factor):
            result.append(chr(ord('a') + i))
        for i in range(factor):
            result.append(chr(ord('a') + i))

    # If n is odd, add an extra character
    if n % 2 != 0:
        result.append('a')

    return ''.join(result)


# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read the length of the string
    n = int(input())

    # Get the string with the minimum number of distinct characters
    result = get_min_distinct_chars(n)

    # Print the result
    print(result)
