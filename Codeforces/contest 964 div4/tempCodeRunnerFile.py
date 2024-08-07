from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    a,b=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    # l=[i for i in range(a,b+1)]
    # l.sort()
    ans=0
    # ans+=2*(a//3+1)
    for i in range(a+1,b+1):
        temp=0
        while(i):
            temp+=1
            i=i//3
        # if(i==0):
        #     ans+=2*temp
        # else:
        ans+=temp
    temp=0
    while(a):
        temp+=1
        a=a//3
    ans+=2*temp
    print(ans)        

    #l[:0]=s
