n=input()
anslist=[]
for i in range(int(n)):
    n1=input()

    li=list(input().split())
    a=int(li[0])
    b=int(li[1])
       
    for j in range(int(n1)):
        if int(li[j])>int(a):
            a=int(li[j])
        elif int(li[j])>int(b):
            b=int(li[j])
    ans=int(a+b )
    anslist.append(ans)
for i in range(int(n)):
    print(anslist[i])
    