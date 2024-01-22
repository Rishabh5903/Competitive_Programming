import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    n,m=map(int,input().split())
    # n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    num=1
    for i in l:
        num*=i
    if(2023//num==2023/num):
        print("YES")
        ans=[]
        for i in range(m-1):
            ans.append(1)
        ans.append(2023//num)
        print(*ans)
    else:
        print("NO")
    #l[:0]=s
