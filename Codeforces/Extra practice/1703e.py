from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    m=[]
    for i in range(n):
        m.append(str(input()))
    ans=0
    for i in range(int(ceil(n/2))):
        for j in range(int(ceil(n/2))):
            if(n%2==0 or not(i==int(ceil(n/2)-1) and j==int(ceil(n/2)-1))):
                c1=0
                c2=0
                if(m[i][j]=='1'):
                    c1+=1
                else:
                    c2+=1
                if(m[j][n-i-1]=='1'):
                    c1+=1
                else:
                    c2+=1
                if(m[n-i-1][n-j-1]=='1'):
                    c1+=1
                else:
                    c2+=1
                if(m[n-j-1][i]=='1'):
                    c1+=1
                else:
                    c2+=1
                if(n%2==0 or j!=int(ceil(n/2)-1)):
                    ans+=min(c1,c2)
                # else:
                #     ans+=min(c1,c2)
    print(ans)

    # s=
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
