import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    m=l[-1]
    ans=0
    flag=True
    ind=-1
    for j in range(1,n,-1):
        ans+=l[-j]-l[-(j+1)]
        if flag:
            if l[-j]<m:
                ind=j
                flag=False
    maxo=0
    j=ind
    if j!=-1:
        while j <n:
            temp=0
            rep=0
            if l[-j]==l[-(j+1)]:
                rep+=1
            else:
                while rep>0 and j<n:
                    


    #l[:0]=s
