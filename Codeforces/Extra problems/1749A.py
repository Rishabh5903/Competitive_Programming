n=int(input())
li=[]
for i in range(n):
    n,m=map(int,input().split())
    l1=[]
    l2=[]
    for j in range(m):
        x,y=map(int, input().split())
        l1.append(x)
        l2.append(y)
    if n<=m:
        li.append('NO')
        continue
    else:

        li.append('YES')
        continue


    #l[:0]=s
for i in li:
    print(i)
