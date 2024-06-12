n=int(input())
li=[]
M=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    # n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    M.append(l)
ans=0
mini=M[0][n-1]
for i in range(n):
    for j in range(n):
        ans+=M[i][j]
        if i+j==n-1:
            mini=min(mini,M[i][j])
ans-=mini
print(ans)
