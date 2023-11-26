import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    ans=[]
    for i in range(n):
        ans.append((l[i],l[-i-1]))
    num=0
    for i in range(n-1):
        num+=abs(ans[i+1][0]-ans[i][0])+abs(ans[i+1][1]-ans[i][1])
    print(num)
    for i in range(n):
        print(ans[i][0],ans[i][1])
    #l[:0]=s
