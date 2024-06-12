import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    cnt=0
    ans=[]
    a=l[0]
    b=l[-1]
    while(a!=b):
        if(a%2):
            a=(a+1)//2
            b=(b+1)//2
            ans.append(1)
        else:
            a=a//2
            b=b//2
            ans.append(0)
        cnt+=1
    print(cnt)
    if(cnt<=n and cnt>0):
        
        print(*ans)

    #l[:0]=s
