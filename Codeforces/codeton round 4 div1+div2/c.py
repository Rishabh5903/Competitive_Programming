import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,c,d=map(int,input().split())
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    l.sort()
    
    i=1
    temp=0
    lis=[l[0]]
    for j in range(n-1):
        if l[j+1]!=l[j]:
            lis.append(l[j+1])
        else:
            temp+=c
    # if len(l)>=2:

    ans=[]
    
    if lis[0]!=1:
        ans.append(d+len(lis)*c+temp)
    # else:
    #     ans.append(temp)
    # print(lis,ans)
    for j in range(len(lis)):
        # if (l[j]-i)*c+d*(n-j-1)<ans[-1]:
        if lis[j]!=i:
            temp+=(lis[j]-i)*d
        ans.append(temp+c*(len(lis)-j-1))
        
        i=lis[j]+1
        # print(ans)
    print(min(ans))
    #l[:0]=s
