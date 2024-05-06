import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    ans=1
    prev=1
    for j in range(1,n1):
        if s[j-1]==s[j]:
            ans+=2*prev
            prev=2*prev
        else:
            ans+=1
            prev=1
    print(ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
