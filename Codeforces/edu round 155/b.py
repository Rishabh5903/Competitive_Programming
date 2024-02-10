MOD = 998244353

def solve():
    n = int(input())
    a = list(map(int, input().split()))

    result = 0
    max_bit = 30  # Maximum number of bits needed for the constraints

    for bit in range(max_bit):
        cnt_ones = 0
        cnt_zeros = 0

        for i in range(n):
            if (a[i] >> bit) & 1:
                cnt_ones += 1
            else:
                cnt_zeros += 1

        # Calculate the contribution of this bit position to the result
        contribution = (1 << bit) * (cnt_ones * cnt_zeros)
        result = (result + contribution) % MOD

    print(result)

solve()
