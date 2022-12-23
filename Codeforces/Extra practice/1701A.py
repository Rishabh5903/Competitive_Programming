n=int(input())
li=[]
for i in range(n):
    n1,n2=map(int,input().split())
    n3,n4=map(int,input().split())
    count=0
    if n1==1:
        count+=1
    if n2==1:
        count+=1
    if n3==1:
        count+=1
    if n4==1:
        count+=1
    if count==0:
        li.append(0)
    elif count==4:
        li.append(2)
    else:
        li.append(1)
    
for i in li:
    print(i)
