import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
mod=1e9+7
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    fr=[0]*26
    for i in range(n):
        fr[ord(s[i])-ord('a')]+=1
    ans=1
    for i in fr:
        ans=(ans*((i+1)%mod))%mod
    print(int(ans-1))
    # l=list(map(int,input().split()))
    #l[:0]=s
