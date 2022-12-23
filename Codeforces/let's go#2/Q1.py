n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    l=[]
    if n1==1:
        li.append('YES')
        continue
    for j in range(n1-1):
        if s[j+1]==s[j]:
            continue
        else:
            l.append(s[j])
    
        # if s[-1]!=s[-2]:
    l.append(s[-1])
    l.sort()
    flag=True
    for j in range(len(l)-1):
        if l[j+1]==l[j]:
            flag=False
            break
    if flag:
        li.append('YES')
    else:
        li.append('NO')
for i in li:
    print(i)
