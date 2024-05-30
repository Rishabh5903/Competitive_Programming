from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans=1
    f=0
    temp=float('inf')
    for i in range(n):
        ans+=abs(a[i]-b[i])
        
        if(a[i]<=b[-1]<=b[i] or a[i]>=b[-1]>=b[i]):
            f=1
        else:
            temp=min(temp,abs(a[i]-b[-1]),abs(b[i]-b[-1]))
    if( not f):
        ans+=temp
    print(ans)
    
    #l[:0]=s
