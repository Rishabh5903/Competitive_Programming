import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,d=map(int,input().split())
    #n=int(input())
    s=str(input())
    ans=[]
    f=0
    for j in range(n):
        if int(s[j])<d and not(f):
            ans.append(str(d))
            ans.append(s[j])
            f=1
        else:
            ans.append(s[j])
    if not(f):
        ans.append(str(d))
    print(int(''.join(ans)))

    #l=list(map(int,input().split()))
    #l[:0]=s
