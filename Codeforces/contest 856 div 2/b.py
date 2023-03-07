import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if l[0]==1:
        l[0]=2
    for j in range(1,n):
        if l[j]==1:
            l[j]+=1
        if l[j]%l[j-1]==0:
            l[j]+=1
    print(*l)
    #l[:0]=s
