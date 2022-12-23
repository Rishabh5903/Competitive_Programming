n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(map(int,input().split()))
    li.append(l.index(max(l))+1)
for i in li:
    print(i)
