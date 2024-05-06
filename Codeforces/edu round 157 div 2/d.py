from sys import stdin,stdout
input = stdin.readline
from bisect import bisect,bisect_right
from math import inf,ceil,log2
from heapq import heapify,heappop,heappush
from collections import Counter
 
n = int(input())
a = list(map(int,input().split()))
b = [0 for i in range(n)]
for i in range(1,n):
    b[i] = b[i-1]^a[i-1]
for i in range(20):
    one = 0
    zero =0
    for j in range(n):
        if (b[j]>>i)&1:
            one += 1
        else:
            zero += 1
    if one > zero:
        for j in range(n):
            b[j] = b[j] ^ (1<<i)
    print(*b)  
print(*b)    