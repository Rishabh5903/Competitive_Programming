n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans=0
    for j in a:
        # if j==len(a):
        #     break
        # else:
            
            # num=a[j]
            # if num!='D':
        if len(str(j))>1 and (j in b):
            a.remove(j)
            b.remove(j)
        elif len(str(j))>1 and (not(j in b)):
            a[a.index(j)]=len(str(j))
            ans+=1
    for j in b:
        # num=b[j]
        # if num!='D':
        if len(str(j))>1 :
            b[b.index(j)]=len(str(j))
            ans+=1

    for j in a:
        # if j!='D':
            if j in b:

                b.remove(j)
                continue
            else:
                if j==1:
                    ans+=1
                else:
                    if 1 in b:
                        ans+=1
                        b.remove(1)
                    else:
                        ans+=2
            
    li.append(ans)

for i in li:
    print(i)
