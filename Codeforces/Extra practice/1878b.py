import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
    ans=[]
    for i in range(n):
        ans.append(2*i+1)
    print(*ans)
