n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))

    if l[1]%l[0]!=0:
        li.append((0,0))
    else:
        li.append((1,int(l[1]/l[0])))
for i in range(0,len(li)) :
    (a,b)=li[i]
    print(a,b)