import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,m=map(int,input().split())
    if(n%2):
        if(m==n//2+1):
            print(-1)
            continue
    # else:
    ans=[0]*n
    if(n%2):
        ans[n//2]=n//2+1
    ans[0]=m
    ans[-1]=(n+1-ans[0])
    a=[]
    if(m<=n/2):
        for i in range(1,n//2+1):
            if(i!=ans[0]):
                a.append(i)
    else:
        for i in range(int(ceil(n/2)+1),n+1):
            if(i!=ans[0]):
                a.append(i)
    for i in range(len(a)):
        ans[i+1]=a[i]
        ans[-(i+2)]=(n+1-ans[i+1])
    print(*ans)

    # ans=[0]*n

        
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
