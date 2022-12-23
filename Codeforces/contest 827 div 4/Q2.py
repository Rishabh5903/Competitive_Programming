n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    l=sorted(l)
    flag=True
    for j in range(n1-1):
        if l[j]==l[j+1]:
            li.append('NO')
            flag=False
            break
    if flag:
        li.append('YES')
for i in li:
    print(i)
