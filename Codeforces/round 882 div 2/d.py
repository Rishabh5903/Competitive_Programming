def calculate_ops(n, m, q, s, ranges, flip_count):
    prefix = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix[i] = prefix[i - 1] + int(s[i - 1])

    ops_needed = [0] * (n + 1)
    for li, ri in ranges:
        ops_needed[li] += 1
        if ri + 1 <= n:
            ops_needed[ri + 1] -= 1

    flip = 0
    for i in range(1, n + 1):
        flip += ops_needed[i]
        ops_needed[i] = flip

    one_counts = [0] * (n + 1)
    for i in range(1, n + 1):
        one_counts[i] = one_counts[i - 1] + int(s[i - 1])

    result = []
    for i in range(q):
        xi = flip_count[i + 1] if i + 1 < len(flip_count) else 0
        if i < m:
            li, ri = ranges[i]
            xi_ones = one_counts[ri] - one_counts[li - 1]
            if xi:
                xi_ones = ri - li + 1 - xi_ones
        else:
            xi_ones = one_counts[n] if xi else 0
        result.append(ops_needed[i + 1] + xi_ones)

    return result


# Read input values
n, m, q = map(int, input().split())
s = input()
ranges = [list(map(int, input().split())) for _ in range(m)]
flip_count = [0] * (q + 1)
for _ in range(q):
    xi = int(input())
    flip_count[xi] ^= 1

# Calculate and print the minimum number of operations for each query
ops_result = calculate_ops(n, m, q, s, ranges, flip_count)
for ops in ops_result:
    print(ops)
