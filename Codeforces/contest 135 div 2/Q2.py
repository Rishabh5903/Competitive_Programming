n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    ans=[]
    var=n1-2
    if n1%2==0:
        for j in range(n1-2):
            ans.append(var)
            var-=1
    else:
        for j in range(n1-5):
            ans.append(var)
            var-=1
        ans.append(1)
        ans.append(2)
        ans.append(3)
    ans.append(n1-1)
    ans.append(n1)
    li.append(ans)
for i in li:
    print(*i)
