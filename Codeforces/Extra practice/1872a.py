import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    print(ceil(abs(a-b)/(2*c)))
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
