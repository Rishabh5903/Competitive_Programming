import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    prev='0'
    ans=[]
    for j in range(len(s)-1):
        if s[j]=='?':
            ans.append(prev)
        else:
            ans.append(s[j])
            prev=s[j]
    print(''.join(ans))
    #l=list(map(int,input().split()))
    #l[:0]=s
