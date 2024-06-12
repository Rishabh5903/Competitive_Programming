from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    chk1=[0]*(k+1)
    chk2=[0]*(k+1)
    for i in range(n):
        if(a[i]<=k):
            chk1[a[i]]=1
    for i in range(m):
        if(b[i]<=k):
            chk2[b[i]]=1
    c1=0
    c2=0
    f=1
    for i in range(1,k+1):
        if(chk1[i]==0 and chk2[i]==0):
            print("NO")
            f=0
            break
        c1+=chk1[i]
        c2+=chk2[i]
    if(f):
        if(c1>=k//2 and c2>=k//2):
            print("YES")
        else:
            print("NO")
    #l[:0]=s
