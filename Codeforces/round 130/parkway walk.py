n=int(input())
li=[]
for i in range(n):
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    energy=sum(l2)
    if energy<=(l1[1]):
        li.append(0)
    else:
        li.append(energy-l1[1])
for i in li:
    print(i)

