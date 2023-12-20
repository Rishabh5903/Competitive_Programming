import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    d={}
    for i in range(n):
        if(s[i] in d):
            d[s[i]]+=1
        else:
            d[s[i]]=1
    v=[]
    for i in d:
        v.append(d[i])
    v.sort()
    if(len(v)==1):
        print(n)
        continue
    for i in range(1,len(v)-1):
        v[i]+=v[i-1]
    if(v[-1]<=v[-2]):
        if(n%2):
            print(1)
        else:
            print(0)
    else:
        print(v[-1]-v[-2])
    #l=list(map(int,input().split()))
    #l[:0]=s
