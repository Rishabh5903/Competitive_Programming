def check_dull_pair(n, a, b):
    # Check if 'a' contains only zeros
    if any(a):
        return "NO"

    # Calculate the initial array 'c'
    c = [abs(a[i] - b[i]) for i in range(n)]
    diff = c[0]

    # Check if the difference 'diff' is the same for all elements of 'c'
    for i in range(1, n):
        if c[i] != diff:
            return "NO"

    return "YES"

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    print(check_dull_pair(n, a, b))
