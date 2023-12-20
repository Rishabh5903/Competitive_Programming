import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(1):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if(n==1):
        print(1,1)
        print(0)
        print(1,1)
        print(0)
        print(1,1)
        print(-l[0])
    else:
        print(1,1)
        print(-l[0])
        print(1,n)
        l1=[0]*n
        for i in range(1,n):
            l1[i]=-n*l[i]
        print(*l1)
        print(2,n)
        for i in range(1,n):
            l1[i]=(n-1)*l[i]
        l1.pop(0)
        print(*l1)

    #l[:0]=s
