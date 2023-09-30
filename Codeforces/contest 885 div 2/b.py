def minimum_max_planks(t, test_cases):
    for i in range(t):
        n, k, c = test_cases[i]
        prefix_sums = [0] * (n + 1)
        color_count = [0] * (k + 1)
        min_max_planks = n

        for j in range(1, n + 1):
            prefix_sums[j] = prefix_sums[j - 1] + (color_count[c[j - 1]] > 0)
            color_count[c[j - 1]] += 1

        start = 0
        for end in range(n):
            count = prefix_sums[end + 1] - prefix_sums[start]
            max_color_count = color_count[c[end]] - (color_count[c[start]] > 0)
            min_max_planks = min(min_max_planks, count - max_color_count)
            
            color_count[c[start]] -= 1
            start += 1

        print(min_max_planks)

# Input parsing and function call
t = int(input())
test_cases = []
for _ in range(t):
    n, k = map(int, input().split())
    colors = list(map(int, input().split()))
    test_cases.append((n, k, colors))
minimum_max_planks(t, test_cases)
