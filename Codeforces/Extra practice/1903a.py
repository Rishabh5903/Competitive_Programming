import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    temp=l.copy()
    temp.sort()
    if(temp==l):
        print("YES")
    else:
        if(m>=2):
            print("YES")
        else:
            print("NO")
    #l[:0]=s
