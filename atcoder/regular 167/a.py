import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor
for _ in range(1):
    n,m=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    # print(l)
    ans=0
    for i in range(n-m):
        ans+=(l[i]+l[2*(n-m)-i-1])**2
    for i in range(2*(n-m),n):
        ans+=l[i]**2
    print(ans)
    #l[:0]=s
