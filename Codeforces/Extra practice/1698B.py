n=int(input())
li=[]
for i in range(n):

    l2=[]
    N,k=map(int,input().split())
    l=list(map(int,input().split()))
    for j in range(1,len(l)-1):
        if l[j-1]+l[j+1]<l[j]:

            l2.append(j)
        else:
            continue
    if k>=2:
        li.append(len(l2))
        continue
    else:
        p=0
        for j in range(1,len(l)-1):
            if j%2==1:
                p+=1
            else:
                continue
        li.append(p)
for i in li:
    print(i)
