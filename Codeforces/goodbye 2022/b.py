import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    if n%2==0:
        ans=[]
        for j in range(1,n//2+1):
            ans.append(n-j+1)
            ans.append(j)
        print(*ans)
    else:
        ans=[]
        for j in range(1,n//2+1):
            
            ans.append(n-j+1)
            ans.append(j)
        ans.append(n//2+1)
        print(*ans)
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
