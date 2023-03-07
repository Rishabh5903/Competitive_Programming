for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    c1=0
    c2=0
    c3=0
    ans=sum(l)
    for j in range(n-1):
        if l[j]==-1 and l[j+1]==-1:
            c1+=1
            break
        elif l[j]==1 and l[j+1]==-1:
            c2+=1
        elif l[j]==-1 and l[j+1]==1:
            c3+=1
    if c1:
        print(ans+4)
    elif c2 or c3:
        print(ans)
    else:
        print(ans-4)