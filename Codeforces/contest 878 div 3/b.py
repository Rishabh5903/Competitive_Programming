import sys
input = sys.stdin.readline
from math import log,pow
for _ in range(int(input())):
    n,k=map(int,input().split())
    
    if k<=log(n,2):
        print(int(min(n+1,pow(2,k))))
    else:
        print(n+1)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
