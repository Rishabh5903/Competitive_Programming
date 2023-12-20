import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    rows=['1','2','3','4','5','6','7','8']
    cols=['a','b','c','d','e','f','g','h']
    for i in rows:
        if(i!=s[1]):
            print(s[0]+i)
    for i in cols:
        if(i!=s[0]):
            print(i+s[1])
            #l=list(map(int,input().split()))
    #l[:0]=s
