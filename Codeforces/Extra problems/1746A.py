import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n1,n2=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if 1 in l:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
