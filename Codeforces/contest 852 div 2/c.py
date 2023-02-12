import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    lis=[]
    for j in range(1,n-1):
        if l[j-1]<=l[j]>=l[j+1] or l[j-1]>=l[j]<=l[j+1]:
            lis.append((l[j],j))
    if len(lis)<2:
        print(-1)
        continue
    a=min(lis)[1]
    b=max(lis)[1]
    flag=False
    if a<b:
        if l[a-1]<l[b] and l[b+1]>l[a]:
            print(a,b+2)
            flag=True
    elif b<a:
        if l[a+1]<l[b] and l[b-1]>l[a]:
            print(b,a+2)
            flag=True
    if not(flag):
        print(-1)


    #l[:0]=s
