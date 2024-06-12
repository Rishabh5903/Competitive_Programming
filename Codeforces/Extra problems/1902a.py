import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    if('0' in s):
        print("YES")
    else:
        print("NO")
    #l=list(map(int,input().split()))
    #l[:0]=s
