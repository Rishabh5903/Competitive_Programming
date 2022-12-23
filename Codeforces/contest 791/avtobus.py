def g(x):
    if x%4==0:
        return int(x/4)
    else:
        return g(x-4)+1
def h(x):
    if x%6==0:
        return int(x/6)
    else:
        return h(x-6)+1
def f(n):
    if n==2:
        return -1
    elif n%2!=0:
        return -1
    elif n==4:
        return (1,1)
    elif n==6:
        return (1,1)
    elif n==8:
        return (2,2)
    elif n==10:
        return (2,2)
    elif n%12==0:
        return (int(n/6),int(n/4))
    elif n%4==0 and n%6!=0:
 
        return (h(n-4)+1,int(n/4))
    elif n%6==0 and n%4!=0:

        return (int(n/6),g(n-6)+1)
    else:
        return (h(n-4)+1,g(n-6)+1)

n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    li.append(f(n1))
for i in li:
    if i==-1:
        print(i)
    else:
        (a,b)=i
        print(a,b)
