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
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    pa=a.copy()
    pb=b.copy()
    for i in range(n-2,-1,-1):
        pa[i]+=a[i+1]
        pb[i]+=b[i+1]
    ans=0
    ra=0
    rb=0
    # print(a,b)
    for i in range(n):
        if(a[i]>b[i]):
            ra+=a[i]
        elif b[i]>a[i]:
            rb+=b[i]
        else:
            if(a[i]==0):
                continue
            elif(a[i]==1):
                if(ra<=rb):
                    ra+=1
                else:
                    rb+=1
            else:
                if(i==(n-1)):
                    if(ra>=rb):
                        ra-=1
                    else:
                        rb-=1
                else:
                    if(pa[i+1]>=pb[i+1]):
                        ra-=1
                    else:
                        rb-=1
        # print(ra,rb)
                    

    print(min(ra,rb))
    #l[:0]=s
