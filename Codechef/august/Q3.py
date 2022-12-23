n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    a=max(l[0],l[1])
    b=min(l[0], l[1])
    if a==b:
        li.append("YES")
    else:

        flag=True
        while flag and b<=a:
            b*=2
            if b==a:
                flag=False
                li.append('YES')
                continue
        if flag:
            li.append('NO')
        

for i in li:
    print(i)
