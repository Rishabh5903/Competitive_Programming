import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    prev0=-1
    prev1=-1
    if s[0]=='0':
        prev0=0
    else:
        prev1=0
    ans=[1]
    for j in range(1,n1-1):
        if s[j]=='1':
            if prev0==-1:
                ans.append(1)
            else:
                ans.append(prev0+2)
            prev1=j
        else:
            if prev1==-1:
                ans.append(1)
            else:
                ans.append(prev1+2)
            prev0=j
    print(*ans)
    #l=list(map(int,input().split()))
    #l[:0]=s
