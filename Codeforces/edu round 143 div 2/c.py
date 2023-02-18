import sys
input = sys.stdin.readline
from bisect import bisect_left
 
def BinarySearch(a, x):
    i = bisect_left(a, x)
    if i:
        return (i-1)
    else:
        return -1
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=[0]
    l=list(map(int,input().split()))
    b=b+l
    prev=[b[0]]
    for j in range(1,n+1):
        prev.append(prev[-1]+b[j])
    cnt=[0]*(n+2)
    rem=[0]*(n+2)
    for i in range(n):
        j=BinarySearch(prev, prev[i]+a[i])
        # print(prev)
        # print(j)
        cnt[i] += 1
        cnt[j+1] -= 1
        rem[j+1] += a[i] - prev[j] + prev[i]                                                                                 
    ans=[]
    for i in range(1,n+1):
        ans.append(cnt[i]*b[i]+rem[i])
        # if i<=n-1:
        cnt[i+1 ] += cnt[i]
    print(*ans)
    #l[:0]=s
