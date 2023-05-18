import sys
input = sys.stdin.readline
from math import sqrt,ceil
for _ in range(int(input())):
    a,b=map(int,input().split())
    ans=float('inf')
    for j in range(1,10**5):
        ans=min(ans, ceil(a/j)+ceil(b/j)+j-1)
    print(ans)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
