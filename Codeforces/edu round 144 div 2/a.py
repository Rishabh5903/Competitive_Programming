import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:n]
    s1='FBFFBFFB'
    temp=(n+8-n%8)//8
    s1*=(temp*3)
    # print(s1)
    if s in s1:
        print('YES')
    else:
        print('NO')

    #l=list(map(int,input().split()))
    #l[:0]=s
