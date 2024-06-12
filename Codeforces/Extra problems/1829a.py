import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    st='codeforces'
    s=str(input())
    cnt=0
    for j in range(10):
        if s[j]!=st[j]:
            cnt+=1
    print(cnt)
    #l=list(map(int,input().split()))
    #l[:0]=s
