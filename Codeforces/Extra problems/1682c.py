from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    # s=set()
    l=list(map(int,input().split()))
    a=[]
    b=[]
    l.sort()
    for i in range(n):
        if(i%2==0):
            a.append(l[i])
        else:
            b.append(l[i])
    c=b.copy()
    d=a.copy()
    e=a.copy()
    s1=1
    s2=0
    for i in range(1,len(b)):
        if(b[i]>b[i-1]):
            s2+=1
        if(a[i]>a[i-1]):
            s1+=1
    if (len(d) and len(b)):
        if(d[0]<b[-1]):
            d.append(b[-1])
            d.sort()
    if (len(e) and len(b)):
        if(e[-1]>b[0]):
            e.append(b[0])
            e.sort()
    if (len(b)):
        if(b[0]<a[-1]):
            b.append(a[-1])
            b.sort()
    if (len(c)):
        if(c[-1]>a[0]):
            c.append(a[0])
            c.sort()
    ans=0
    c1=1
    for i in range(1,len(d)):
        if(d[i]>d[i-1]):
            c1+=1
    c4=1
    for i in range(1,len(e)):
        if(e[i]>e[i-1]):
            c4+=1
    # ans=max(ans,c1)
    c2=1
    for i in range(1,len(b)):
        if(b[i]>b[i-1]):
            c2+=1
    c3=1
    for i in range(1,len(c)):
        if(c[i]>c[i-1]):
            c3+=1
    
    ans=max(min(c1,s2),min(c4,s2),min(c2,s1),min(c3,s1))
    print(b,c,d,e)
    print(ans)
    # print(ans)
    #l[:0]=s
