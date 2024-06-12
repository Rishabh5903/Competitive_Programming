import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,q=map(int,input().split())
    #n=int(input())
    #s=str(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    prev=[a[0]]
    for j in range(1,n):
        prev.append(prev[-1]+a[j])
    l=[]
    for j in range(q):
        l.append((b[j],j))
    l.sort()
    ind=0
    ans=[0]*q
    temp=0
    for j in range(q):
        while ind<n:
            if a[ind]<=l[j][0]:
                
                temp=prev[ind]
                ind+=1
            else:
                # ind+=1
                break
        ans[l[j][1]]=temp
    print(*ans)
    #l[:0]=s
