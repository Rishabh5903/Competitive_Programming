import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:n]
    if s==')(':
        print(1)
        print(1,2)
        continue
    elif s=='()':
        print(0)
        # print(1,2)
        continue
    l=[]
    for i in range(n//2):
        l.append('(')
        l.append(')')
    l[2*k-1]='('
    l[-2]=')'
    ans=[]
    for i in range(n):
        if s[i]!=l[i]:
            ans.append([i+1,i+1])
    print(len(ans))
    for i in ans:
        print(*i)
    #l=list(map(int,input().split()))
    #l[:0]=s
