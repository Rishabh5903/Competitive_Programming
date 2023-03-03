import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    ans=[]
    for j in range(1,n+1):
        if j%2==1:
            ans.append(2*((j-1)//2+1))
        else:
            ans.append(2*((j)//2-1)+1)
    if n%2==1:
        ans[-1]=n
    print(*ans)

    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
