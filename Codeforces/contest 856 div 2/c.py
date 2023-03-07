import sys
input = sys.stdin.readline


for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    # maxo=l[0]
    ans=[1]
    # num=l[0]
    # den=1
    # for j in range(1,n):
    #     if l[j]<=(num*l[j])/(den*(ans[-1]+1)):
    #         # maxo=(maxo*l[j])/(ans[-1]+1)
    #         num*=l[j]
    #         den*=ans[-1]+1
    #         ans.append(ans[-1]+1)
    #     else:
    #         num=l[j]
    #         den=1
    #         ans.append(1)
    # print(*ans)
    # l[:0]=s
    prev=0
    for j in range(1,n):
        if l[prev]>=ans[-1]+1:
            ans.append(ans[-1]+1)
        else:
            k=prev
            var=ans[-1]+1
            flag=True
            while k<=j:
                if l[k]>=(var):
                    ans.append(var)
                    prev=k
                    flag=False
                    break
                else:
                    k+=1
                    var-=1
            if flag:
                ans.append(1)
    print(*ans)

