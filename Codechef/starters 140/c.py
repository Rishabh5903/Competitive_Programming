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
    # l=[i for i in range(1,n+1)]
    ans=[]
    if(n%2==0):
        for i in range(1,n//2+1):
            ans.append(i)
            ans.append(n-i+1)
    else:
        for i in range(1,n//2+1):
            ans.append(i)
            ans.append(n-i)
        ans.append(n)
    # if(n%2):
        
    print(*ans)


    #l[:0]=s
