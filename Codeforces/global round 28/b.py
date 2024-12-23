from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k=map(int,input().split())
    ans=[0]*n
    for i in range(int(ceil(n/k))):
        ans[min(n-1,k*i+k-1)]=i+1
    j=int(ceil(n/k))+1
    for i in range(0,n):
        if(ans[i]==0):
            ans[i]=j
            j+=1
    print(*ans)
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
