n=int(input())
li=[]
for i in range(n):
    l=list(map(int, input().split()))
    if l[0]%6==0:
        li.append(l[1]*(l[0]//6))
    else:
        li.append(l[1]*(l[0]//6+1))
for i in li:
    print(i)