import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s1=str(input())
    s2=str(input())
    z1=0
    z2=0
    for j in range(n1):
        if s1[j]=='1':
            z1+=1
        if s2[j]=='1':
            z2+=1
    if z1==z2:
        print('YES')
    else:
        print('NO')
    #l=list(map(int,input().split()))
    #l[:0]=s
