
import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    n=len(bin(max(l)))-2
    m=len(bin(min(l)))-2
    maxo=[0]*n
    mino=[1]*n
    for j in range(n-m):
        mino[j]=0
    # print(andOperator(3, 1))
    for j in range(n1):

        
        # print(mino)
        for k in range(1,len(bin(l[j]))-1):
            if bin(l[j])[-k]=='1':
                maxo[-k]=1
            else:
                mino[-k]=0
    maxo.reverse()
    mino.reverse()
    maxn=0
    minn=0
    for j in range(len(maxo)):
        maxn+=(2**j)*maxo[j]
        minn+=(2**j)*mino[j]

    # print(maxo,mino)
    print(maxn-minn)
    #l[:0]=s
