import sys
input = sys.stdin.readline
from math import sqrt
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    # check=[0]*m
    d={}
    lis=[]
    
    for j in l:
        for k in range(1,int(sqrt(j))+1):
            if j%k==0:
                if not(k in d):
                    d[k]=1
                    if not(j//k in d):
                        d[j//k]=1
        if not(j in d):
            d[j]=1
    flag=True
    for j in range(1,m+1):
        if 2*j>m:
            if j in d:
                lis.append(j)
            else:
                flag=False
                break
    if flag:
        print(m-lis[0])
    else:
        print(-1)
    #l[:0]=s
