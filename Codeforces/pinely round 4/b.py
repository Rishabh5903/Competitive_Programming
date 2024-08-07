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
    l=list(map(int,input().split()))
    ans=[0]*n
    ans[0]=l[0]
    ans[-1]=l[-1]
    for i in range(1,n-1):
        ans[i]=l[i-1] | l[i]
    val=1
    for i in range(n-1):
        if(ans[i]&ans[i+1] != l[i]):
            val=0
            break
    if(not val):
        print(-1)
    else:
        print(*ans)
    #l[:0]=s
