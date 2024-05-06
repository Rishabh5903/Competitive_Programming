import sys
input = sys.stdin.readline
n=10**6+1
l=[0]*(n)
l[1]=1
for j in range(1,(n-1)//2):
    if j%2==1:
        l[2*j]=1
        l[2*j+1]=l[j]+1
    else:
        l[2*j]=l[j]+1
        l[2*j+1]=1
l[n-1]=6

for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    if sum(l1)%2==0:
        print(0)
    else:
        ans=float('inf')
        for j in l1:
            if l[j]==1:
                ans=1
                break
            else:
                ans=min(ans,l[j])

        print(ans)
