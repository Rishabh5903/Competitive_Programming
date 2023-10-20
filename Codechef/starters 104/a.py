import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,gcd
for _ in range(int(input())):
    x,y,k=map(int,input().split())
    for i in range(k):
        if(i%2==0):
            if(x>=y):
                x=gcd(x,y)
            else:
                y=gcd(x,y)
    print(x+y)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
