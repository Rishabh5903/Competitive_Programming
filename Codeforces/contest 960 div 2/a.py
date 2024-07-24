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
    l.sort()
    l.reverse()
    cnt=1
    ans=0
    for i in range(n-1):
        if(l[i]==l[i+1]):
            cnt+=1
        else:
            if(cnt%2):
                ans=1
                break
            else:
                cnt=1
    if(cnt%2):
        ans=1
    if(ans):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
