import sys
input = sys.stdin.readline
import heapq
from math import sqrt,ceil,floor,lcm,gcd
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    h1=[]
    h2=[]
    for i in range(n):
        h1.append((-(a[i]+b[i]),-a[i],i,0))
        # h1.append((-(a[i]+b[i]),-a[i],i,1))
        # h1.append((-(a[i]+b[i]),-b[i],i,0))
        h2.append((-(a[i]+b[i]),-b[i],i,1))
    heapq.heapify(h1)
    heapq.heapify(h2)
    ans=0
    done=[0]*n
    turn=0
    while(turn<n):
        temp=0
        if(turn%2==0):
            temp=heapq.heappop(h1)
        else:
            temp=heapq.heappop(h2)
        if(done[temp[2]]==0):
            # if(turn==0):

            if(temp[3]==(turn%2) and temp[3]):
                ans-=(b[temp[2]]-1)
                done[temp[2]]=1
                turn+=1
            elif(temp[3]==(turn%2) and temp[3]==0):
                ans+=(a[temp[2]]-1)
                done[temp[2]]=1
                turn+=1

    print(ans)