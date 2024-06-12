import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    lis=list(map(int,input().split()))
    l=[lis[0]]
    for j in range(n-1):
        if lis[j+1]!=lis[j]:
            l.append(lis[j+1])
    flag=1
    n=len(l)
    for j in range(n-2):
        if l[j]>l[j+1]<l[j+2]:
            flag=0
            break
    if flag:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
