n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    if ((l[1]-l[0])%3==1) or ((l[1]-l[0])%3==0):
        li.append('YES')
    else:
        li.append('NO')
for i in li:
    print (i)