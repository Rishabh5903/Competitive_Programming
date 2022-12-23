n=int(input())
li=[]
for i in range(n):
    n3=int(input())
    l=list(map(int,input().split()))
    freq={}
    n1=0
    n2=0
    for j in l:
        if j in freq:
            freq[j]+=1
        else:
            freq[j]=1
    for k in freq:
        if freq[k]%2==0:
            n2+=1
        else:
            n1+=1
    if n2%2==0:
        li.append(n1+n2)
    else:
        li.append(n1+n2-1)
for i in li:
    print(i)
