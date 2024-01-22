from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k,x=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    l.sort()
    for i in range(1,n):
        l[i]+=l[i-1]
    ans=-float('inf')
    # print(*l)
    for i in range(1,min(k+2,n+1)):
        ind=-(i+x)
        num=0
        if(ind<(-n)):
            num=0
        else:
            num=l[ind]
        temp=l[-i]-num
        temp2=0
        if(ind>=(-n)):
            temp2=l[ind]
        # print(temp,temp2)
        ans=max(ans,temp2-temp)
    if(k>=n):
        ans=max(ans,0)
    print(ans)
    #l[:0]=s
