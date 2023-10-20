import sys,heapq
input = sys.stdin.readline
from math import sqrt,ceil,floor
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    # lis=[]
    # for i in range(n):
    #     lis.append((-l[i],i))
    # heapq.heapify(lis)
    # temp=heapq.heappop(lis)
    # ans=-temp[0]
    # prev=temp[1]
    # done=[0]*n
    # done[prev]=1
    # while(len(lis)>0):
    #     temp=heapq.heappop(lis)
    #     ans+=-temp[0]
    #     done[temp[1]]=1
    #     for i in range(temp[1]+1,prev-1):
    #         if(not done[i])
    prev1=l.copy()
    for i in range(1,n):
        prev1[i]=max(prev1[i-1],prev1[i])
    prev2=l.copy()
    for i in range(n-2,-1,-1):
        prev2[i]=max(prev2[i+1],prev2[i])
    # print(prev1,prev2)
    ans=l[0]+l[-1]
    for i in range(1,n-1):
        ans+=min(prev1[i],prev2[i])
    print(ans)
    #l[:0]=s
