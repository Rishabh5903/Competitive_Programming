import sys
input = sys.stdin.readline
from math import log2
for _ in range(int(input())):
    l,r=map(int,input().split())
    m = int(log2(r/l)) + 1
    cnt = 1
    cnt = (cnt + r//2**(m-1) - l)
    if m > 1:
        if l*(2**(m-2))*3 <= r:
            cnt = (cnt +((m-1))*(((r//((2**(m-2))*3))-l + 1)))
    
    print(m, cnt%998244353)
