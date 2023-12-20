import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())

    #s=str(input())
    p=list(map(int,input().split()))
    q=list(map(int,input().split()))
    r=list(map(int,input().split()))
    a=[]
    b=[]
    c=[]
    for i in range(n):
        a.append((p[i],i))
        b.append((q[i],i))
        c.append((r[i],i))
    a.sort()
    b.sort()
    c.sort()
    ans=0
    # print(a,b,c)
    for i in range(n-3,n):
        for j in range(n-3,n):
            for k in range(n-3,n):
                if(a[i][1]!=b[j][1] and a[i][1]!=c[k][1] and b[j][1]!=c[k][1]):
                    ans=max(ans,a[i][0]+b[j][0]+c[k][0])
    print(ans)
    #l[:0]=s
