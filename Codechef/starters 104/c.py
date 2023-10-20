import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,gcd
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=[0]*n
    ans[0]=l[0]
    for i in range(1,n):
        temp=gcd(l[i],l[i-1])
        ans[i]=(m//temp)*temp
        if(gcd(ans[i],l[i-1])!=l[i]):
            ans[i]-=temp
    print(*ans)
    #l[:0]=s

