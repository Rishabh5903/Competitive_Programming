n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    # s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    l=[0]*n1
    # l[n1//2]=1
    for i in range(n1):
        if (i+1)%2==0:
            l[(i+1)//2-1]=(i+1)
        else:
            l[-((i+1)//2+1)]=(i+1)
    li.append(l)

for i in li:
    print(*i)
