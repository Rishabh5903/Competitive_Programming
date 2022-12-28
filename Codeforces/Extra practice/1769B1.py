import sys
input = sys.stdin.readline

    #n1,n2=map(int,input().split())
n1=int(input())
#s=str(input())
l=list(map(int,input().split()))
    #l[:0]=s
cumsum=[l[0]]
for j in range(1,n1):
    cumsum.append(cumsum[j-1]+l[j])
tot=cumsum[-1]
ans=[0]
for j in range(n1):
    for k in range(1,l[j]+1):
        if int((100*k)/l[j])==int((100*(cumsum[j]-(l[j]-k)))/tot):
            temp=int((100*k)/l[j])
            if ans[-1]!=temp:
                ans.append(temp)
for j in ans:
    print(j)
