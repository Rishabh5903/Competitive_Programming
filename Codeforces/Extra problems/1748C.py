import sys
input = sys.stdin.readline
# from statistics import mode
n=int(input())
li=[]
for i in range(n):

    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # if i==84:
    #     print(l)
    # l[:0]=s
    # z=[]
    # sum=[l[0]]
    ans=0
    prev=-1
    z=0
    maxo=0
    d={}
    prevsum=l[0]
    if l[0]==0:
        prev=0
        maxo=1
        d[0]=1
    
    
    
    for j in range(1,n1):
        prevsum+=l[j]
        if prev==-1:
            if prevsum==0 and l[j]!=0:
                z+=1

        if l[j]!=0 and prev!=-1:
            if not(prevsum in d):
                d[prevsum]=1
            else:
                d[prevsum]+=1
            maxo=max(maxo,d[prevsum])
        elif l[j]==0:
            prev=0
            ans+=maxo
            d={}
            maxo=0
            if not(prevsum in d):
                d[prevsum]=1
            else:
                d[prevsum]+=1
            maxo=max(maxo,d[prevsum])
    ans+=maxo
    ans+=z

    print(ans)
