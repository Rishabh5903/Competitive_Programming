import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    # ans=0
    for j in range(n):
        if(j%2==0):
            maxo=0
            ind=0
            maxo2=0
            lis=[]
            for i in range(n):
                
                if(a[i]!=0 and b[i]!=0):
                    
                    lis.append((b[i]+a[i],a[i],i))
                    # lis.append((a[i],a[i],i))
            lis.sort()
            ind=lis[-1][2]
            a[ind]-=1
            b[ind]=0
            # ans+=a[i]
        else:
            maxo=0
            ind=0
            maxo2=0
            lis=[]
            for i in range(n):
                
                if(b[i]!=0 and a[i]!=0):
                    
                    lis.append((a[i]+b[i],b[i],i))
                    # lis.append((b[i],b[i],i))
            lis.sort()
            ind=lis[-1][2]
            b[ind]-=1
            a[ind]=0
            # ans-=b[i]
    # print(*a)
    # print(*b)
    print(sum(a)-sum(b))
                
    #l[:0]=s
