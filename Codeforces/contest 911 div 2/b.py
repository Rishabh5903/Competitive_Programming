import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    f1=0
    f2=0
    f3=0
    if((a+b)%2==0):
        f3=1
    if((a+c)%2==0):
        f2=1
    if((c+b)%2==0):
        f1=1
    print(f1,f2,f3)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
