import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if l[0]==0:
        print(1)
    elif l[1]==l[2]==0:
        if l[3]>0:
            ans=l[0]
            ans+=min(l[0], l[3])
            if sum(l)>ans:
                ans+=1
            print(ans)
        else:
            print(l[0])
    else:
        ans=l[0]
        ans+=2*min(l[1],l[2])
        if max(l[1],l[2])-min(l[1],l[2])<=l[0]:

            ans+=max(l[1],l[2])-min(l[1],l[2])
            ans+=min(l[0]-max(l[1],l[2])+min(l[1],l[2]),l[3])
        else:
            ans+=l[0]
        if sum(l)>ans:
            ans+=1
        print(ans)
        # print(2*l[0]+2*min(l[1],l[2])+1)
    #l[:0]=s
