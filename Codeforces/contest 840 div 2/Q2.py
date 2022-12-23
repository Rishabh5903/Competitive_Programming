import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    l=[]
    for j in range(n):
        l.append((l1[j],j))
    l.sort()
    mino=[0]*n
    temp=l2[l[-1][1]]
    for j in range(1,n+1):
        mino[-j]=min(temp,l2[l[-j][1]])
        temp=mino[-j]
    # if l[0][0]>k:
    #     print('NO')
    #     continue
    prev=0
    flag=True
    for j in range(n):
        # print(j+1,l[j+1],k,prev)
        if l[j][0]>k+prev:
            
            while l[j][0]>k+prev and k>=0:
                prev=k+prev
                k-=mino[j]
            
    if k<0:
        flag=False
    # if l[-1][0]>k+prev:
    #     k-=mino[-1]
    #     prev=k+prev
        # print(k)
    # print(mino)
    if flag:
        print('YES')
    else:
        print('NO')
    #l[:0]=s
