import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    e=0
    o=0
    for j in l:
        if j%2==0:
            e+=1
        else:
            o+=1
    if ((e*2+o*1)%2==n1%2):
        print('YES')
    else:
        print('NO')
    #l[:0]=s
