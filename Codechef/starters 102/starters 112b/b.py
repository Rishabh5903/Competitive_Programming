import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    f=1
    if(n==1):
        if(s[0]=='1'):
            print("YES")
        else:
            print("NO")
        continue
    for i in range(n-1):
        if(f and s[i]=='1'):
            print("IDK")
        else:
            f=0
            print("NO")
    
    if(f and s[n-1]=='1'):
        print("YES")
    else:
        print("NO")
    #l=list(map(int,input().split()))
    #l[:0]=s
