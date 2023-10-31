import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    lis=[]
    for i in range (n-1):
        if(l[i]>l[i+1]):
            lis.append(i+1)
    f=1
    for i in lis:
        if(not(i==1 or i==2 or i==4 or i==8 or i==16)):
            f=0
            break
    if(f):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
