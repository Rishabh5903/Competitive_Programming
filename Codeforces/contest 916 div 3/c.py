import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    for i in range(1,n):
        a[i]+=a[i-1]
    b=list(map(int,input().split()))
    maxo=0
    ans=0
    cnt=1
    for i in range(min(k,n)):
        maxo=max(maxo,b[i])
        ans=max(ans,a[i]+(k-i-1)*maxo)
    # ans+=(k-cnt)*maxo
    print(ans)
    #l[:0]=s
