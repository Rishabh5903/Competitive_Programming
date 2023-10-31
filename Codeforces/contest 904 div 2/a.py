import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
def sol(x):
    ans=0
    while (x):
        ans+=x%10
        x//=10
    return ans
for _ in range(int(input())):
    x,y=map(int,input().split())
    while(sol(x)%y):
        x+=1

    print(x)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
