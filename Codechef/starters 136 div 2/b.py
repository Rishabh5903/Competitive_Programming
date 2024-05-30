from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    l=[0]
    d={}
    d[0]=1
    for i in s:
        if(i=='0'):
            l.append(l[-1]-1)
        else:
            l.append(l[-1]+1)
        if(l[-1] in d):
            d[l[-1]]+=1
        else:
            d[l[-1]]=1
    temp=0
    ans=n
    for i in d:
        temp+=((d[i])*(d[i]-1))//2
    # print(temp,l,d)
    ans+=2*temp
    ans+=(n*(n-1))//2-temp
    print(ans)
    
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
