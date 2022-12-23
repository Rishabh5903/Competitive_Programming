n=int(input())
li=[]
for i in range(n):
    N=int(input())
    l1=list(map(int,input().split()))
    M=int(input())
    l2=list(map(int,input().split()))
    s=0
    for j in range(1,len(l1)):
        s+=abs(l2.index(l1[j])-l2.index(l1[j-1]))
    li.append(s)
for i in range(len(li)):
    print("Case #", i+1, ": ", li[i], sep="")
