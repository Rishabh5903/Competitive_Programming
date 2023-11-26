from math import gcd

def solve(test_cases):
    for _ in range(test_cases):
        n = int(input())
        arr = list(map(int, input().split()))

        prefix_gcd = [arr[0]]
        for i in range(1, n):
            prefix_gcd.append(gcd(prefix_gcd[-1], arr[i]))

        suffix_gcd = [arr[-1]]
        for i in range(n - 2, -1, -1):
            suffix_gcd.insert(0, gcd(suffix_gcd[0], arr[i]))

        total_sum = 0
        for i in range(n - 2):
            total_sum += gcd(prefix_gcd[i], suffix_gcd[i + 2])

        print(total_sum)

if __name__ == "__main__":
    test_cases = int(input())
    solve(test_cases)
