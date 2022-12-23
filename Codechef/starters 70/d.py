
import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=[0]*n1
    d1={}
    d2={}
    temp=0
    num=0
    for j in range(n1):
        # print(temp)
        if l[j]==1:
            temp+=1
            ans[j]=temp
            num+=1
            continue
        if l[j] in d1 and not(d2[d1[l[j]]]==0):
            # if d2[d1[l[j]]]==0:
            #     # temp+=1
            #     ans[j]=temp
            #     d2[d1[l[j]]]+=1
                
            #     continue
            if d2[d1[l[j]]]<l[j]-1:
                ans[j]=d1[l[j]]
                d2[d1[l[j]]]+=1
            else:
                d2[d1[l[j]]]+=1
                num+=d2[d1[l[j]]]
                ans[j]=d1[l[j]]

                d2[d1[l[j]]]=0
                # temp+=1
                # if j<n1-1:
                #     if l[j+1] in d1:
                #         if d2[d1[l[j+1]]]==0:
                #             temp+=1
                
                # temp+=1
        else:
            temp+=1
            d1[l[j]]=temp
            d2[d1[l[j]]]=1
            ans[j]=temp
            # temp+=1
        # print(temp)
        # print(d1,d2,ans,temp)
    if num!=len(ans):
        print(-1)
    else:
        print(*ans)
    # print(d1,d2)

    #l[:0]=s