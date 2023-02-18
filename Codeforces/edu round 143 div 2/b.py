import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    c=[0]*51
    comm=[0]*51
    flag=False
    for j in range(n):
        l,r=map(int,input().split())
        if l==r==m:
            flag=True
            
        if l<=m<=r:
            for k in range(l,r+1):

                c[k]+=1
                if k!=m:
                    comm[k]+=1
        else:
            for k in range(l,r+1):

                c[k]+=1
    if flag:
        print('YES')
        continue
    flag2=True
    val=c[m]
    for j in range(len(c)):
        if j!=m:
            if c[j]>=val:
                if comm[j]>=val:
                    flag2=False
                    break
    if flag2:
        print('YES')
    else:
        print('NO')

    

    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
