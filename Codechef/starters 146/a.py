from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    # n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    n=len(l)
    lis=[]
    for i in range(n):
        lis.append((l[i],i))
    lis.sort()
    ans=[0]*len(l)
    temp=0
    # val=0
    i=0
    while(i<n):
        for j in range(2**temp):
            if((i+j)==n):
                break
            else:
                ans[lis[i+j][1]]=temp
        i+=2**temp
        temp+=1
    print(*ans)

    #l[:0]=s
