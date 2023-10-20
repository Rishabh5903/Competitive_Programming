import sys
input = sys.stdin.readline
from math import sqrt,ceil
for _ in range(int(input())):
    px,py=map(int,input().split())
    ax,ay=map(int,input().split())
    bx,by=map(int,input().split())
    a1=sqrt((px-ax)**2+(py-ay)**2)
    a2=sqrt((ax)**2+(ay)**2)
    b1=sqrt((px-bx)**2+(py-by)**2)
    b2=sqrt((bx)**2+(by)**2)
    midx=(ax+bx)/2
    midy=(ay+by)/2
    r=sqrt((ax-bx)**2+(ay-by)**2)/2
    num2=0
    # num2=min(max(a2,b1),max(a1,b2))
    if((a2<=r and b1<=r) or (b2<=r and a1<=r) ):
        num2=r
    num2=max(num2,min(max(a2,b1),max(a1,b2)))
    num1=min(max(a1,a2),max(b1,b2))
    
    # print(a1,a2,b1,b2)
    # ans=0
    # if(a1>=b2 and b1>=a2):
    #     ans=(min(a1,b1))
    # elif (b2>=b1 and a2>=a1):
    #     ans=(min(b2,a2))
    # else:
    #     ans=(min(max(a1,a2),max(b1,b2)))
    print(min(num1,num2))

    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
