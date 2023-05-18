import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    if s[0]=='0':
        print(0)
    else:
        ans=1
        if s[0]!='?':
            for j in range(len(s)-1):
                if s[j]=='?':
                    ans*=10
        else:
            ans*=9
            for j in range(1,len(s)-1):
                if s[j]=='?':
                    ans*=10
        print(ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
