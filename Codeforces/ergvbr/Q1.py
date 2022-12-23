n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    q=0
    a=0
    for j in s:
        if j=='Q':
            q+=1
        else:
            a+=1
    if q>a:
        li.append('No')
    else:
        flag=True
        for j in range(n1):
            if s[j]=='Q' and a>=q:
                q-=1
            elif s[j]=='A' and a>=q:
                a-=1
            elif q>a:
                li.append('No')
                flag=False
                break
        if flag:
            li.append('Yes')
            
for i in li:
    print(i)
