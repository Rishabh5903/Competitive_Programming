import sys
input = sys.stdin.readline
from math import ceil

n,d=map(int,input().split())
#n=int(input())
#s=str(input())
l=list(map(int,input().split()))
l.sort()
cnt=0
ans=0
for j in range(n):
    num=ceil(d/l[-(j+1)])
    if ceil(d/l[-(j+1)])==d//l[-(j+1)]:
        num+=1
    if cnt+num<=n:
        ans+=1
        cnt+=num
    else:
        break
print(ans)
#l[:0]=s
