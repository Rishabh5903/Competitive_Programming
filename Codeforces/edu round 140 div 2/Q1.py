import sys
input = sys.stdin.readline
for _ in range(int(input())):
    m=input().strip()

    x1,y1=map(int,input().split())
    x2,y2=map(int,input().split())
    x3,y3=map(int,input().split())
    flag1=False
    flag2=False
    if x1==x2 or x2==x3 or x3==x1:
        flag1=True
    if y1==y2 or y2==y3 or y3==y1:
        flag2=True
    if flag1 and flag2:
        print('NO')
    else:
        print('YES')
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
