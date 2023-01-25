import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    a.sort()
    ans=0
    for j in range(n1-1):
        if a[j]<=j and a[j+1]>(j+1):
            ans+=1
    ans+=2
    if a[0]==0:
        ans-=1
    print(ans)
    #l[:0]=s
