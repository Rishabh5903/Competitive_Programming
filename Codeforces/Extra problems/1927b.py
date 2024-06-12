from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
import string
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    a=list(string.ascii_lowercase)
    lis=[]
    for i in range(n):
        lis.append((l[i],i))
    lis.sort()
    ans=[0]*n
    ans[0]='a'
    ind=1
    for i in range(1,n):
        if(lis[i][0]==lis[i-1][0]):
            ans[lis[i][1]]=a[ind]
            ind+=1
        else:
            ind=0
            ans[lis[i][1]]=a[ind]
            ind+=1
    print("".join(ans))

    #l[:0]=s
