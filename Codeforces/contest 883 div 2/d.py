import math

def maxm(n, v):
    v.sort()
    return v[-1]

def minm(n, v):
    v.sort()
    return v[0]

def solve():
    n, d, h = map(float, input().split())
    l = list(map(int, input().split()))
    v = [li + h for li in l]

    ans = 0.5 * d * h * n

    for i in range(int(n - 1)):
        if v[i] > l[i + 1]:
            ans -= 0.5 * math.pow((v[i] - l[i + 1]), 2) * (d / h)

    print(ans)

t = int(input())

for _ in range(t):
    solve()
