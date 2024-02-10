from sys import stdin, stdout
input_fn = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque

for _ in range(int(input_fn())):
    n = int(input_fn())
    s = list(map(int, input_fn().split()))
    e = list(map(int, input_fn().split()))
    w = list(map(int, input_fn().split()))
    w.sort()

    m = []
    for i in range(n):
        m.append([s[i], 0])
        m.append([e[i], 1])

    m.sort()

    sp = []
    l = []
    for i in range(2 * n):
        if m[i][1] == 0:
            sp.append(m[i][0])
        else:
            l.append(m[i][0] - sp.pop())

    l.sort(reverse=True)
    tws = 0
    for i in range(n):
        tws += l[i] * w[i]

    print(tws)
