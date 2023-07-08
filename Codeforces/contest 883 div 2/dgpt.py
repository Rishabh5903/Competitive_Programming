def check_snowflake_existence(n):
    # Check if n is a power of 2
    if n & (n - 1) != 0:
        return "NO"

    # Check if (n - 1) is divisible by 3
    if (n - 1) % 3 != 0:
        return "NO"

    return "YES"


# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    n = int(input())
    result = check_snowflake_existence(n)
    print(result)
