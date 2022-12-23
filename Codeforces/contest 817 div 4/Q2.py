n=int(input())
li=[]
for i in range(n):
    n=int(input())
    l1=list(str(input()))
    l2=list(str(input()))
    flag=True
    for j in range(len(l1)):
        if l1[j]=='R':
            if l2[j]!='R':
                flag=False
                break
        elif l1[j]=='G':
            if l2[j]=='R':
                flag=False
                break
        elif l1[j]=='B':
            if l2[j]=='R':
                flag=False
                break
    if flag:
        li.append('YES')
    else:
        li.append('NO')

for i in li:
    print(i)
