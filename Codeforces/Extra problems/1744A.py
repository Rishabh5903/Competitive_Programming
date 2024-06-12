n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    
    l=list(map(int,input().split()))
    s=str(input())
    # l[:0]=s
    flag=True
    l1=[]
    # l1.sort()
    for j in range(n1):
        l1.append((l[j],s[j]))
    l1.sort()
    for j in range(n1-1):
        if l1[j+1][0]==l1[j][0]:
            if l1[j+1][1]==l1[j][1]:
                continue
            else:
                flag=False
                break
    if flag:
        li.append('YES')
    else:
        li.append('NO')
for i in li:
    print(i)
