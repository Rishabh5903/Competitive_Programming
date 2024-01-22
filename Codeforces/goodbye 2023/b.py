import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,m=map(int,input().split())
    if(n==1):
        print(m**2)
    elif(m%n==0):
        print((m*m)//n)
    else:
        print((m*n)//gcd(m,n))
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
