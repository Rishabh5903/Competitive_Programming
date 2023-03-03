import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,q=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    for i in range(q):
        l1=list(map(int,input().split()))
        if l1[0]==1:
            for j in range(l1[1]-1,l1[2]):
                num=l[j]
                ans=0
                while num>0:
                    ans+=num%10
                    num//=10
                l[j]=ans
        else:
            print(l[l1[1]-1])
    #l[:0]=s
