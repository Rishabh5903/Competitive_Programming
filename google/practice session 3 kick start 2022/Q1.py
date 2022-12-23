n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    l1=list(map(int,input().split()))
    li.append(sum(l1)%l[1])

for i in range(len(li)):
    print("Case #", i+1, ": ", li[i], sep="")
