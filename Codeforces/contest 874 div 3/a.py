import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    d={}
    ans=0
    for i in range(n-1):
        if not(s[i:(i+2)] in d):
            d[s[i:(i+2)]]=1
            ans+=1

    print(ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
