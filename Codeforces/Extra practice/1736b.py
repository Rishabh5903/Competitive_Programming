import sys
input = sys.stdin.readline
from math import gcd,lcm
for t in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    # if t==36:
    #     print(l)
    if n==1 or n==2:
        print('YES')
    else:
        flag=True
        for j in range(2,n):
            if gcd(lcm(l[j-2],l[j-1]),lcm(l[j-1],l[j]))!=l[j-1]:
                flag=False
                break
        if flag:
            print('YES')
        else:
            print('NO')
    #l[:0]=s
