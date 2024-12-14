from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    lis=[]
    for i in range(n):
        lis.append(a[i]*b[i])
    lis.sort()
    lis.reverse()
    ans=0
    temp=0
    for i in lis:
        ans+=1
        temp+=i
        if(temp>=m):
            break
    if(temp<m):
        print(-1)
        continue
    print(ans)
    #l[:0]=s
