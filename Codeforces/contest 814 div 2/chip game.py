n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    if (l[0]+l[1])%2==0:
        li.append('Tonya')
    else:
        li.append('Burenka')
for i in li:
    print(i)
