from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    a=str(input())
    a=a[:len(a)-1]
    b=str(input())
    b=b[:len(b)-1]
    c=str(input())
    c=c[:len(c)-1]
    f=0
    for i in range(n):
        if(a[i]!=c[i] and b[i]!=c[i]):
            f=1
            break
    if(f):
        print("YES")
    else:
        print("NO")
    #l=list(map(int,input().split()))
    #l[:0]=s
