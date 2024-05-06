import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    f=0
    fr=[0]*101
    l=list(map(int,input().split()))
    for i in l:
        fr[i]+=1
    for i in range(n):
        if(l[(i-1)%n]<=n and l[i]==l[0] and k%fr[l[(i-1)%n]]==0):
            f=1
            break
    if(f):
        print("Yes")
    else:
        print("No")
    #l[:0]=s

