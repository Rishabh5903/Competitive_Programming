import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    b=str(input())
    c=str(input())
    if('?' in a):
        if(not('A' in a)):
            print('A')
        elif(not('B' in a)):
            print('B')
        elif(not('C' in a)):
            print('C')
    elif('?' in b):
        if(not('A' in b)):
            print('A')
        elif(not('B' in b)):
            print('B')
        elif(not('C' in b)):
            print('C')
    elif('?' in c):
        if(not('A' in c)):
            print('A')
        elif(not('B' in c)):
            print('B')
        elif(not('C' in c)):
            print('C')
    #l=list(map(int,input().split()))
    #l[:0]=s
