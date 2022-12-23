n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(map(int,input().split()))
    li.append(sum(l)+max(l))
for i in li:
    print(i)
