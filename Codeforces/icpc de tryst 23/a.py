import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,p=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    ind=0
    mul=0
    temp=0
    num=10**9+7
    for j in range(1,n):
        if l[j]<l[j-1]:
            ind=j
            mul=1
            temp=l[j-1]
            break
    for j in range(n-ind):
        ans+=mul*(temp-l[n-j-1])
        mul*=p
        mul%=num
    print(ans%num)
    #l[:0]=s
