import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    for j in range(n1-1):
        if l[j+1]%2==l[j]%2:
            ans+=1
    print(ans)
    #l[:0]=s
