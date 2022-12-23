n=int(input())
li=[]
for i in range(n):
    n3=int(input())
    l=list(map(int,input().split()))
    n1=0
    n2=0
    for j in l:
        if j%2==0:
            n1+=1
        elif j%2==1:
            n2+=1
    li.append(min(n1,n2))
for i in li:
    print(i)