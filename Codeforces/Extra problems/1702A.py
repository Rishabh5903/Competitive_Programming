n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    k=len(str(n1))
    li.append(n1-10**(k-1))
for i in li:
    print(i)
