import sys
input = sys.stdin.readline
lis=[]

maxo=0
next2={}
n=int(input())
for _ in range(n):

    l=list(map(int,input().split()))
    # l=l[1:]
    for j in range(1,len(l)-1):
        lis.append(l[j])
        maxo=max(maxo,l[j])
        next2[l[j]]=l[j+1]
    lis.append(l[-1])
    maxo=max(maxo,l[-1])

next={}
lis.sort()
for j in range(len(lis)-1):
    
    next[lis[j]]=lis[j+1]

s=0

for j in lis:
    if j in next2:
        if j in next:
            if next[j]!=next2[j]:
                s+=1
        else:
            s+=1

print(s,n+s-1)
