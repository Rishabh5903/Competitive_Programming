import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())

    l=list(map(int,input().split()))
    from heapq import heappop, heappush, heapify
    heap=[]
    heapify(heap)
    ans=0
    for j in range(n):
        if s[j]=='0':
            heap=[]
            heapify(heap)
        heappush(heap, -1*l[j])
        if s[j]=='1':
            ans+=-1*heappop(heap)
        
    print(ans)
