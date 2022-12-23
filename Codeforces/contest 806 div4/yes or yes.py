n=int(input())
li=[]
for i in range(n):
    l=[]
    l[:0]=str(input())

    if (l[0]=='Y' or l[0]=='y' ) and (l[1]=='E' or l[1]=='e' ) and (l[2]=='S' or l[2]=='s' ):
        li.append('YES')
    else:
        li.append('NO')
for i in li:
    print(i)
