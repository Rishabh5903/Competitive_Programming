n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    # n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    n1=l[0]
    n2=l[1]
    n3=l[2]
    if n1==n2+n3 or n2==n1+n3 or n3==n1+n2:
        li.append('YES')
    else:
        li.append('NO')
for i in li:
    print(i)
