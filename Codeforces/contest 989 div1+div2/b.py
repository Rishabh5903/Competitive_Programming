from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    #n=int(input())
    s=str(input())
    ans=0
    temp=0
    i=0
    while (i<n):
        # print(i)
        if(s[i]=='0'):
            if(temp==(m-1)):
                ans+=1
                i+=k-1
                temp=0
            else:
                temp+=1
        else:
            temp=0
        i+=1
        
    print(ans)

    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
