n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    min=1
    max=1
    for j in range(n1-1):
        if l[j+1]==l[j]:
            min+=1
        else:
            break
    for j in range(1,n1):
        if l[-(j+1)]==l[-j]:
            max+=1
        else:
            break
    if l[0]!=l[-1]:
        li.append(2*min*max)
    else:
        li.append(min*(min-1))
    #l[:0]=s
for i in li:
    print(i)
