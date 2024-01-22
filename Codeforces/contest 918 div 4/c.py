import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd,pow
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    num=sum(l)
    if(pow(floor(sqrt(num)),2)==num):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
