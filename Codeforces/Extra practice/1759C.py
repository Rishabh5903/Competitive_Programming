n=int(input())
li=[]
for i in range(n):
    l,r,x=map(int,input().split())
    a,b=map(int,input().split())
    if a==b:
        li.append(0)
    elif abs(a-b)>=x:
        li.append(1)
    elif max(abs(r-a),abs(l-a))<x or abs(r-l)<x or (abs(l-b)<x and abs(r-b)<x):
        li.append(-1)
    elif (a<b and (abs(l-a)>=x or abs(r-b)>=x)) or (a>b and (abs(l-b)>=x or abs(r-a)>=x)):
        li.append(2)
    else:
        li.append(3)
for i in li:
    print(i)
