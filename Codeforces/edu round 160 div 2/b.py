import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    zero=s.count('0')
    one=s.count('1')
    if(one==zero):
        print(0)
        continue
    else:
        ans=0
        a=zero
        b=one
        for i in range(1,len(s)+1):
            if(s[-i]=='0'):
                a-=1
            else:
                b-=1
            if(one>=a and zero>=b):
                print(i)
                break
    #l=list(map(int,input().split()))
    #l[:0]=s
