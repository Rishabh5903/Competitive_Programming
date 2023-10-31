import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    a=l.copy()
    b=l.copy()
    for i in range(1,n):
        a[i]+=a[i-1]
    for i in range(2,n+1):
        b[-i]+=b[-i+1]
    ans=1e15
    # print(a,b)
    for i in range(1,n):
        # c=0
        # d=0
        # temp=0
        # if(i==1):
        #     d=b[-1]
        # else:
        #     d=b[-i]-b[-i+1]
        # if(i==n-1):
        #     c=a[0]
        # else:
        #     c=a[-i-1]-a[-i-2]
        # if(i<n-1):
        #     temp=a[-i-2]
        # if(i>1):
        #     temp=max(temp,b[-i+1])
        ans=min(ans,max(ceil((+b[-i]-a[-i-1])/2),0)+a[-i-1]+i)
    ans=min(ans,a[-1],ceil(a[-1]/2)+n)
    print(ans)

    #l[:0]=s
