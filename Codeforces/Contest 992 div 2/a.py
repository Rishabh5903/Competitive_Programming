from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,k=map(int,input().split())

    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    if(n==1):
        print("YES")
        print(1)
        continue
    for i in range(n):
        l[i]=l[i]%k
    lis=[]
    for i in range(n):
        lis.append((l[i],i))
    lis.sort()
    ans=0
    ind=-1
    for i in range(1,n-1):
        if(lis[i][0]!=lis[i-1][0] and lis[i][0]!=lis[i+1][0]):
            ans=1
            ind=lis[i][1]
            break
    if(lis[0][0]!=lis[1][0]):
        ans=1
        ind=lis[0][1]
    if(lis[n-1][0]!=lis[n-2][0]):
        ans=1
        ind=lis[n-1][1]
    if(ans==0):
        print("NO")
    else:
        print("YES")
        print(ind+1)
    # print()
    #l[:0]=s
