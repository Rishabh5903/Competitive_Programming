n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    if l[0]==1:
        li.append('YES')
    else:
        li.append('NO')
for i in li:
    print(i)
