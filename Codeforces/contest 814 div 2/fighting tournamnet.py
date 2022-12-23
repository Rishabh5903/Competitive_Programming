def play(n,l1,l2):
    l3=[]
    for j in range(n):
        l3.append(0)
    i=1
    while i<=n:
        if l2[0]>l2[1]:

            l2.append(l2[1])
            l2.remove(l2[1])
            l3[l1[0]-1]+=1

            l1.append(l1[1])
            l1.remove(l1[1])
            i+=1
        else:

            l2.append(l2[0])
            l2.remove(l2[0])
            l3[l1[1]-1]+=1

            l1.append(l1[0])
            l1.remove(l1[0])
            i+=1  
    return l3  

n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    l2=list(map(int,input().split())) 
    l4=[]
    l5=[]
    for j in range(l[1]):
        l3=list(map(int,input().split()))
        l4.append(l3[1])
        l5.append(l3[0])
    l1=[]
    for k in range(max(l4)):
        l1.append(k+1)
    ans=play(max(l4),l1,l2)
    for m in l5:
        li.append(ans[m-1])
for i in li:
    print(i)
