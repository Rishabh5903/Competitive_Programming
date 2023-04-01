import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    M=[]
    for j in range(n):
        temp=list(map(int,input().split()))
        M.append(temp)
    temp=[]
    ans=0
    for j in range(m):
        for k in range(n):
            temp.append(M[k][j])
        temp.sort()
        for k in range(n):
            ans+=temp[k]*(2*k-n+1)
        temp=[]
    print(ans)
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
