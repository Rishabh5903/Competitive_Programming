import sys
input = sys.stdin.readline
from math import ceil,floor,sqrt
for _ in range(int(input())):
    n,k=map(int,input().split())
    p=floor((sqrt(1+4*(n**2+n-2*k))-1)/2)
    m=n-p
    p=m
    # print(m)
    if p>=2:
        t=k-n*(n+1)//2+(n-p+1)*(n-p+2)//2
    else:
        t=k
    # print(m,t)
    ans=[0]*n
    for j in range(1,m):
        ans[-j]=(t+1)*(n-m-t+2)
    for j in range(m+1,m+t):
        ans[-j]=-1
    ans[-m]=t
    for j in range(m+t,n+1):
        ans[-j]=-t-1
    print(*ans)
    #n=int(input())
    #s=str(input())
    # l=list(map(int,input().split()))
    #l[:0]=s
