n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    l1=[]
    flag=True
    for j in l:
        if len(l1)<=2:
            if not(j in l1):
                l1.append(j)
        else:
            flag=False
            break
    if len(l1)<=2:
        li.append(n1//2+1)
    else:
        li.append(n1)
for i in li:
    print(i)
