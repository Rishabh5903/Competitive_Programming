n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    if l[0]>0:
        li.append(pow(l[1],l[0]/2))
    else:
        li.append(1)
for i in li:
    print(i)
