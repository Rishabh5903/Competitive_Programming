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
    l=[]
    l[:0]=s
    cnt=0
    for i in range(n):
        if(l[i]=='('):
            cnt+=1
        elif (l[i]==')'):
            cnt-=1
        else:
            if(cnt>0):
                l[i]=')'
                cnt-=1
            else:
                l[i]='('
                cnt+=1
    ans=0
    lis=[]
    for i in range(n):
        if(l[i]=='('):
            lis.append(i)
        else:
            ans+=i-lis[-1]
            lis.pop()
    print(ans)
    
