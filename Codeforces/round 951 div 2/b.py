def longest_common_subsegment(x, y):
    # XOR x and y to find the differing bit
    xor_value = x ^ y
    # Find the highest power of 2 that divides xor_value
    length = 1
    while xor_value % 2 == 0:
        xor_value //= 2
        length *= 2
    return length

# Read the number of test cases
t = int(input())
# Iterate over each test case
for _ in range(t):
    x, y = map(int, input().split())
    # Output the length of the longest common subsegment
    print(longest_common_subsegment(x, y))