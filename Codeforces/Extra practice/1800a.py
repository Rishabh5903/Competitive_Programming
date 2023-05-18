import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    l=[s[0].lower()]
    for j in range(1,n):
        if s[j].lower()!=s[j-1].lower():
            l.append(s[j].lower())
    s=''.join(l)
    if s=='meow':
        print('YES')
    else:
        print('NO')
    #l=list(map(int,input().split()))
    #l[:0]=s
