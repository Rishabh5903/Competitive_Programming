import sys
input = sys.stdin.readline
for _ in range(int(input())):
    x1,y1=map(int,input().split())
    x2,y2=map(int,input().split())
    if(x1<y1 and x1<x2 and x2<y2 and y1<y2) or (x1<y1 and x2<x1 and x2<y2 and y2<y1) or (x1>y1 and x1>x2 and x2>y2 and y1>y2) or (x1>y1 and x1<x2 and x2>y2 and y1<y2):
        print('YES')
    else:
        print('NO')
    #n1=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
