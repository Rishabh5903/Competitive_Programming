import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if(a==b and b!=c):
        print(c)
    elif(a==c and b!=c):
        print(b)
    elif(c==b and a!=c):
        print(a)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
