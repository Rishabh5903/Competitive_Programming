from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    ans=[]
    f=0
    for i in range(len(s)-1):
        if(s[i]==s[i+1] and f==0):
            ans.append(s[i])
            nex=chr(ord(s[i]) + 1)
            if(s[i]=='z'):
                nex='a'
            ans.append(nex)
            f=1
        else:
            ans.append(s[i])
    ans.append(s[-1])

    if(f==0):
        nex=chr(ord(s[-1]) + 1)
        if(s[-1]=='z'):
            nex='a'
        ans.append(nex)
    print("".join(ans))

    #l[:0]=s
