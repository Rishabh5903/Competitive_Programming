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
    f=[]
    c=1
    # print(l)
    for i in range(1,n):
        if(l[i]==l[i-1]):
            c+=1
        else:
            f.append(c)
            c=1
            
    f.append(c)
    ans=float('inf')
    if(len(f)==1):
        print(-1)
        continue
    # print(f)
    for i in range(len(f)):
        if(f[i]==1):
            if(i==0 ):
                ans=min(ans,f[i+1])
            elif(i==(len(f)-1)):
                ans=min(ans,f[i-1])
            else:
                ans=min(ans,min(f[i-1],f[i+1]))
    print(ans)
                

    #l[:0]=s
