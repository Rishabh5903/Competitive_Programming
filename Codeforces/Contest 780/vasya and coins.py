n=input()
n=int(n)
li=[]
for i in range(n):
    a,b=input().split()
    a=int(a)
    b=int(b)
    val1=a
    val2=2*b    
    if a==0:
        ans=1
    elif b==0:
        ans=a+1

    else:
        ans=a+2*b+1
    li.append(ans)

for j in li:
    print(j)
