n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    if l[0]==1 and l[1]==1:
        li.append(0)
    else:
        li.append((min(l[0],l[1])-1)*2+max(l[0],l[1]))
for i in li:
    print(i)
