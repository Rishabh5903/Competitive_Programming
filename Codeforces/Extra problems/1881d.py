import sys
input = sys.stdin.readline
from math import ceil,floor
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    prod=1
    for i in l:
        prod*=i
    # print(prod**(1/n),int(prod**(1/n)))
    num=floor(prod**(1/n))
    if(num**n==prod or (num+1)**n==prod):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
