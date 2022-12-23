n,q=map(int,input().split())
l=list(map(int,input().split()))
l=sorted(l)
l.reverse()

for i in range(q):
    x,y=map(int,input().split())
    sum=0
    for j in range(len(l)):
        sum+=l[j]
        
        
        if j==(x-y-1):
            n1=sum
        elif j==(x-1):
            n2=sum
    if x==y==1:
        print(l[0])
    else:

        print(n2-n1)


