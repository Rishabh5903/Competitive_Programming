from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    # n=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    # temp=l.copy()
    # temp.sort()
    f=0
    for i in range(n-1):
        if(l[i]>l[i+1]):
            f+=1
    if(f==0 or (f==1 and l[-1]<=l[0])):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
