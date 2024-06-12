from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    # if(_ == 94):
    #     print(a,b)
    ans=0
    i1=0
    i2=n-1
    ans1=0
    i3=0
    i4=m-1
    for i in range(n):
        l=[]
        l.append((abs(a[i1]-b[i3]),i1,i3))
        l.append((abs(a[i1]-b[i4]),i1,i4))
        l.append((abs(a[i2]-b[i3]),i2,i3))
        l.append((abs(a[i2]-b[i4]),i2,i4))
        l.sort()
        ans+=l[-1][0]
        if(l[-1][1]==i1):
            i1+=1
        else:
            i2-=1
        if(l[-1][2]==i3):
            i3+=1
        else:
            i4-=1
    print(ans)
            
    #l[:0]=s
