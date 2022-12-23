N,K=map(int,input().split())
l=list(map(int,input().split()))
li=[]
if K in l:
    print(0)
else:
    for i in range (N):

        for j in range(i+1,N):
            
            s=0
            for k in range(i,j+1):
                s+=l[k]
                li.append(abs(s-K))
    print(min(li))
