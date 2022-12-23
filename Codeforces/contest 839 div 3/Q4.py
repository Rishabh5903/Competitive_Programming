import sys
import math
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    temp=l.copy()
    temp1=sorted(l)
    temp.reverse()
    if l==temp1:
        print(0)
        continue
    elif temp==temp1:
        print(l[0])
        continue
    x1=float('inf')
    x2=0
    for j in range(n1-1):
        if l[j+1]>l[j]:
            x1=min(x1, math.floor((l[j]+l[j+1])/2))
        elif l[j+1]<l[j]:
            x2=max(x2,math.ceil((l[j]+l[j+1])/2))
    if x2>x1:
        print(-1)
    else:
        print(x1)

    #l[:0]=s
