n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    #l[:0]=s
    l1=[]
    a=1
    b=1
    if sum(l)%2==1:
        li.append(-1)
        continue
    else:
    #     for j in range(n1-1):
    #         if l[j+1]==l[j]:
    #             b+=1
    #         else:
    #             l1.append([a,b])
    #             a=j+2
    #             b=j+2
    #     l1.append([a,b])
    # li.append(l1)
        j=0
        sum=0
        while j<=n1-1:
            if sum==0:
                if l[j+1]==l[j]:
                    l1.append([j+1,j+2])
                    j+=2
                else:
                    l1.append([j+1,j+1])
                    j+=1
            elif sum==1:
                l1.append([j+1,j+1])
                j+=1
                sum=0
            elif sum==-1:
                l1.append([j+1,j+1])
                j+=1
                sum=0
    li.append(l1)

        
for i in li:
    if type(i)==int:
        print(i)
    else:
        print(len(i))
        for j in i:
            print(*j)
