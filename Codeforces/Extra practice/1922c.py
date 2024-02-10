from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    # n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    l1=[0]
    l1.append(1)
    l2=[0]
    l2.append(1)
    for i in range(1,n-1):
        if(l[i+1]-l[i]<l[i]-l[i-1]):
            l1.append(l1[-1]+1)
        else:
            l1.append(l1[-1]+l[i+1]-l[i])
    for i in range(n-2,0,-1):
        if(l[i+1]-l[i]>l[i]-l[i-1]):
            l2.append(l2[-1]+1)
        else:
            l2.append(l2[-1]+l[i]-l[i-1])
    # print(l2)
    m=int(input())
    for i in range(m):
        a,b=map(int,input().split())
        if(a<b):
            print(l1[b-1]-l1[a-1])
        else:
            print(l2[n-b]-l2[n-a])
    
    

    #l[:0]=s
