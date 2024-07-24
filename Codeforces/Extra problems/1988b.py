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
    n1=0
    n2=0
    for i in range(n-1):
        if(s[i]=='0' and s[i+1]=='1'):
            n2+=1
        if(s[i]=='1'):
            n1+=1
    if(s[-2]=='1'):
        n1+=1
    else:
        n2+=1
    # print(n1,n2)
    if(n1>n2):
        print("YES")
    else:
        print("NO")
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
