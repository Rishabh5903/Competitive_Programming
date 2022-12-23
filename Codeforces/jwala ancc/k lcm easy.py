n=int(input())
li=[]
for i in range(n):
    n1,n2=list(map(int,input().split()))
    if n1%2==1:
        li.append((int(n1//2),int(n1//2),int(n1-2*(n1//2))))
    elif n1%2==0:
        if (n1/2)%2==0:
            li.append((int(n1/2),int(n1/4),int(n1/4)))
        if (n1/2)%2==1:
            li.append((int(n1/2-1),int(n1/2-1),2))
for i in li:
    (a,b,c)=i
    print(a,b,c)
