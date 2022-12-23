n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    if l[1]>=l[0]:
        li.append(0)
    else:
        li.append(l[0]-l[1])
for i in li:
    print(i)