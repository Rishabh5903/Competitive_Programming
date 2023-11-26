import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    f=0
    cnt=0
    for i in range(n-2):
        if(s[i]==s[i+1]==s[i+2]=='.'):
            f=1
            break
        if(s[i]=='.'):
            cnt+=1
    if(s[n-2]=='.'):
        cnt+=1
    if(s[n-1]=='.'):
        cnt+=1
    if(f):
        print(2)
    else:
        print(cnt)
    #l=list(map(int,input().split()))
    #l[:0]=s
