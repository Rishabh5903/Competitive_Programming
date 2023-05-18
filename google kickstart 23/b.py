import sys
input = sys.stdin.readline
for t in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=[l[0]]
    d={}
    d[l[0]]=1
    
    f=1
    for j in range(1,n):
        if l[j] not in d:
            d[l[j]]=1
            ans.append(l[j])
        else:
            if l[j-1]!=l[j]:
                f=0
                break

    if f:
        print('Case #'+str(t+1)+':',*ans)
    else:
        print('Case #'+str(t+1)+':','IMPOSSIBLE')

    #l[:0]=s
