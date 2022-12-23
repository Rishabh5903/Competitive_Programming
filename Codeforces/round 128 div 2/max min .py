n=int(input())
li=[]
for i in range(n):
    l=list(map(int, input().split()))
    a,b,c,d=l[0],l[1],l[2],l[3]
    if a>=c and a<=d :
        li.append(a)
    elif a>=c and a>d:
        li.append(a+c)
    elif a<=c and c<=b:
        li.append(c)
    elif a<=c and c>b:
        li.append(c+a)
for i in li:
    print(i)