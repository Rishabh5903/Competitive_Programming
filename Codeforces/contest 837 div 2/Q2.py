n=int(input())
li=[]
for i in range(n):
    m,n=map(int,input().split())
    l=[]
    for j in range(n):
        x,y=map(int, input().split())
        l.append((min(x,y),max(x,y)))
    l.sort()
    j=0
    # print(l)
    while j<len(l):
        
        k=1
        copy=l[j][1]
        while j+k<len(l):
            if l[j+k][1]<=copy and l[j+k][1]<=l[j+k-1][1]:
                # if k>=2:
                # print(j,l[j+k-1])
                l[j+k-1]=-1
                k+=1
            else:
                break
        # if l[j+1]==l[j]:

        j=j+k
    # print(l)
    l1=[]
    for j in l:
        if not(j==-1):
            l1.append(j)
    if n==0:
        li.append((m*(m+1))//2)
        continue
    else:
        # print(l1)
        var=l1[0][0]*(m-l1[0][1]+1)
        # l1=[(1,2),(2,3),(3,4)]
        for j in range(1,len(l1)):
            var+=(l1[j][0]-l1[j-1][0])*(m-l1[j][1]+1)
        # print(var)
        li.append((m*(m+1))//2-var)
for i in li:
    print(i)