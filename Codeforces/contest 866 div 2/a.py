import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    # n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    n=len(s)
    if s=='^':
        print(1)
        continue
    # print(n)
    temp=0
    ans=0
    if s[0]!='^':
        ans+=1
    if s[-1]!='^':
        ans+=1
        # temp=1
    # else:
        # temp=1
    for j in range(1,n):
        if s[j]!='^':
            # if temp==1:
            #     temp=0
            # else:
            #     temp=1
        # else:
            if not( s[j-1]=='^'):
                ans+=1
        # print(s[j],ans,temp)
    # if temp:
    #     ans+=1
    print(ans)

    #l=list(map(int,input().split()))
    #l[:0]=s
