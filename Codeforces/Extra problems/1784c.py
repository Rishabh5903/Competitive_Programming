import sys
input = sys.stdin.readline
from heapq import heapify,heappop,heappush
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    lis=[l[0]]
    h=heapify(lis)
    ans=[]
    ans.append(l[0]-1)
    for j in range(1,n):
        temp=lis
        heappush(temp, l[j])
        


    #l[:0]=s
