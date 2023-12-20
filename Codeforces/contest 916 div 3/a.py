import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    # print(s)
    ans=0
    d={}
    for i in s:
        if(s.count(i)>=(ord(i)-ord('A')+1)):
            d[i]=1
    # print(d)
    print(len(d))
    #l=list(map(int,input().split()))
    #l[:0]=s
