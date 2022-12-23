n=int(input())
li=[]
for i in range(n):
    x=int(input())
    if x<=100:
        li.append(x)
    elif x>100 and x<=1000:
        li.append(x-25)
    elif x>1000 and x<=5000:
        li.append(x-100)
    elif x>5000:
        li.append(x-500)


for i in li:
    print(i)
