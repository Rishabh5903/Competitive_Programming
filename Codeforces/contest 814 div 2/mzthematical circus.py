n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    n1=l[0]
    k=l[1]
    if k%2==1:
        li.append('YES')
        for j in range(n1):
            if (j+1)%2==1:
                li.append([j+1,j+2])
    elif  k%4==0:
        li.append('NO')
    elif k%4==2:
        li.append('YES')
        for j in range(n1):
            if (j+1)%4==2:
                li.append([j+1,j]) 
            elif (j+1)%4==3:

                li.append([j+1,j+2]) 
for i in li:
    if type(i)==str:
        print(i)
    else:
        print(*i)

