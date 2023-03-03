import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    a.sort()
    ans=1
    prev=1
    fr=1
    for i in range(1,n):
        if a[i]==a[i-1]+1:
            if fr<prev:
                prev=fr
            fr=1
        elif a[i]==a[i-1]:
            fr+=1
            if fr>prev:
                ans+=1
                prev+=1
        else:
            ans+=1
            fr=1
            prev=1
    print(ans)
    #l[:0]=s
