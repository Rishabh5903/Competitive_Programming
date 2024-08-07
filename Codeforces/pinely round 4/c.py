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
    ans=[]
    for i in range(40):
        l.sort()
        if(l[0]==l[-1]==0):
            break
        num=0   
        if(l[0]==l[-1]):
            num=l[0]
        else:
            num=l[-1]//2
        for j in range(n):
            l[j]=abs(l[j]-num)
        ans.append(num)
    if(l[0]==l[-1]==0):
        print(len(ans))
        print(*ans)
    else:
        print(-1)

    #l[:0]=s
