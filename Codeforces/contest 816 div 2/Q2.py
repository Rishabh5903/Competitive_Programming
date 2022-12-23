N=int(input())
li=[]
for i in range(N):
    l=list(map(int,input().split()))
    n=l[0]
    k=l[1]
    b=l[2]
    s=l[3]
    if not(b<=s/k and s<=k*b+(k-1)*n ):
        li.append(-1)
        continue
    else:
        ans=[0]*n
        if (s//k-b)<1:
            ans[0]=s
            li.append(ans)
            continue
        else:
            ans[0]=b*k+(k-1)
            rem=s-ans[0]
            for j in range(1,len(ans)):
                if rem>0:
                    if rem>=(k-1):

                        ans[j]+=(k-1)
                        rem-=(k-1)
                        continue
                    else:
                        ans[j]+=rem
                        rem=0
                        continue
        li.append(ans)

for i in li:
    if type(i)==int:
        print(i)
    else:
        print(*i)

