from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    temp=0
    for i in range(n-1):
        temp+=abs(l[i]-l[i+1])
    ans=temp
    for i in range(n-1):
        if(i==0):
            ans=max(ans,temp-abs(l[1]-l[0])+abs(l[1]-1),temp-abs(l[1]-l[0])+abs(l[1]-k))
        else:
            ans=max(ans,temp-abs(l[i+1]-l[i])-abs(l[i]-l[i-1])+abs(l[i+1]-1)+abs(l[i-1]-1),temp-abs(l[i+1]-l[i])-abs(l[i]-l[i-1])+abs(l[i+1]-k)+abs(l[i-1]-k))
    if(n>=2):
        ans=max(ans,temp-abs(l[n-1]-l[n-2])+abs(l[n-2]-1),temp-abs(l[n-1]-l[n-2])+abs(l[n-2]-k))
    print(ans)
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    
    #l[:0]=s
