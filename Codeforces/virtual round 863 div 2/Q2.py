n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=[1,3]
    if n1%2!=0:
        li.append([1]*n1)
    else:
        li.append(ans+[2]*(n1-2))
for i in li:
    print(*i)
