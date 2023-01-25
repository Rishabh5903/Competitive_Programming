import sys
from math import gcd
input = sys.stdin.readline
for _ in range(int(input())):
    n1,n2=map(int,input().split())
    print(n1-gcd(n1,n2))
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
