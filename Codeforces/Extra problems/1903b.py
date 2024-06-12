import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    m=[]
    for _ in range(n):
        l=list(map(int,input().split()))
        # for j in range(n):
        #     temp.app
        m.append(l)
    ans=[0]*n
    for i in range(n):
        temp=(1<<30)-1
        for j in range(n):
            if(i!=j):
                temp&=m[j][i]
        ans[i]=temp
    f=1
    for i in range(n):
        for j in range(n):
            if(i!=j and ans[i]|ans[j]!=m[i][j]):
                f=0
                break
    # print(*ans)
    if(f):
        print("YES")
        print(*ans)
    else:
        print("NO")
    
    #s=str(input())
    
    #l[:0]=s
