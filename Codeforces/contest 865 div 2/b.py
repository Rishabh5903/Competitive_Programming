import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=[0]*n
    b=[0]*n
    for j in range(1,n+1):
        if j%2==1:
            b[j-1]=j
        else:
            a[j-1]=j
    a[0]=2*n-1
    b[-1]=2*n
    ind=1
    for j in range(2*n-2,n,-1):
        if j%2==0:
            a[2*ind]=j
            
        else:
            b[2*ind-1]=j
            ind+=1
    print(*a)
    print(*b)
    #l[:0]=s==:

