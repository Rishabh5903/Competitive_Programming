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
    maxo=l[0]
    temp=[]
    var=float('inf')

    for i in range(1,n):
        if(l[i]<maxo):
            temp.append((l[i],i))
            if(i<n-1):
                var=min(var,l[i+1]-l[i])
        maxo=max(maxo,l[i])
    for i in range(len(temp)):
        l[temp[i][1]]+=var
    temp2=l.copy()
    l.sort()
    if(temp2==l):
        print("Yes")
    else:
        print("No")
    

    # l[:0]=s

