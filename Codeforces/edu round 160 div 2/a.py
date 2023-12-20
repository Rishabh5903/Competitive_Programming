import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    a=0
    b=0
    for i in range(1,len(s)):
        if(s[i]!='0'):
            a=int(s[:i])
            b=int(s[i:])
            break
    if(b<=a):
        print(-1)
    else:
        print(a,b)
    #l=list(map(int,input().split()))
    #l[:0]=s
