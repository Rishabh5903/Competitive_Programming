import sys
input = sys.stdin.readline
for t in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    lis=list(map(int,input().split()))
    l=[]
    d={}
    for j in range(n):
        l.append((lis[j],j+1))
        if lis[j] not in d:
            d[lis[j]]=1
        else:
            d[lis[j]]+=1
    l.sort()
    mex=0
    # cnt=0
    for j in range(n):
        
        if l[j][0]==mex:
            mex+=1
        elif l[j][0]<mex:
            continue
        else:
            break
    # print(mex)
    if mex==0:
        print('YES')
    elif (mex+1) in lis:
        f=1
        a=-1
        b=-1 
        j=0
        while j<n and (a==-1 or b==-1):
            if lis[j]==mex+1:
                if a==-1:
                    a=j
            if lis[-(j+1)]==mex+1:
                if b==-1:
                    b=n-j-1
            j+=1
        # print(mex,d,a,b)
        for j in range(a,b+1):
            if lis[j]!=mex+1 and lis[j]<mex:
                d[lis[j]]-=1
                    # f=0
                    # break
        for j in d:
            if d[j]<=0:
                f=0
        if f:
            print('YES')
        else:
            print('NO')
    elif l[-1][0]>mex:
        print('YES')
    else:
        f=0
        for j in range(mex):
            if d[j]>1:
                f=1
                break
        if f:
        # lis.count(mex-1)>1:
            print('YES')
        else:
            print('NO')




    #l[:0]=s
