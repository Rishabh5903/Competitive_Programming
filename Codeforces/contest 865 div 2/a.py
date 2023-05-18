import sys
input = sys.stdin.readline
from math import gcd
for _ in range(int(input())):
    a,b=map(int,input().split())
    if gcd(a,b)==1:
        print(1)
        print(a,b)
    elif a==10**9:
        print(2)
        print(10**9-1,1)
        print(a,b)

    else:
        print(2)
        print(a+1,1)
        print(a,b)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
