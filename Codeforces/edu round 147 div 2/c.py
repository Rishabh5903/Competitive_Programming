import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    d={}
    maxo=1
    maxc=-1
    for j in range(len(s)-1):
        if s[j] not in d:
            d[s[j]]=1
        else:
            d[s[j]]+=1
            if d[s[j]]>maxo:
                maxc=s[j]
        maxo=max(maxo,d[s[j]])
    # print(maxo,maxc)
    l=[]
    # if not maxc==-1:
    for j in range(len(s)-1):
        if s[j]==maxc:
            l.append(j)
    r=0
    if maxc!=-1:
        for j in range(len(l)-1):
            r=max(r,l[j+1]-l[j]-1)
        r=max(r,len(s)-2-l[-1])
        r=max(r,l[0]-0)
    ans=0
    if r==1:
        print(1)
        continue
    if maxc==-1:
        r=len(s)-1
    print(r)

    while r!=1 and r!=0:
        if r==2:
            ans+=2
            break
        r//=2
        ans+=1
    print(ans)

    #l=list(map(int,input().split()))
    #l[:0]=s
