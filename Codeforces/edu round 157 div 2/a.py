import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    x,y,k=map(int,input().split())
    if(x>=y):
        print(x)
        continue
    else:
        print(y+max(0,y-x-k))
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
