import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    m=[]
    for j in range(n):
        v=int(input())
        l=list(map(int,input().split()))
        m.append(l)
    ans=[0]*n
    d={}
    for j in range(n):
        temp=m[-(j+1)]
        flag=1
        for k in range(len(temp)):
            if not(temp[k] in d):
                if flag:
                    ans[-(j+1)]=temp[k]
                    flag=0
                d[temp[k]]=1
    if 0 in ans:
        print(-1)
    else:
        print(*ans)
            
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
