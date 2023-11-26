import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    a=n
    b=-1
    # print(s[-2])
    for i in range(n):
        if(s[i]=='A'):
            a=i
            break
    for i in range(2,n+2):
        if s[-i]=='B':
            b=-i+n+1
            break
    if(a>b):
        print(0)
    else:
        print(b-a)

    #l=list(map(int,input().split()))
    #l[:0]=s
