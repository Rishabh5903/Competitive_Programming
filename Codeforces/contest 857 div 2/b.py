import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    ans=0
    vac=0
    unp=0
    for j in l:
        if j==1:
            unp+=1
            if vac==0:
                ans+=1
            else:
                vac-=1
        else:
            if unp>2:
                if unp%2==0:
                    
                    vac+=((unp-1)//2)
                    unp=2
                    # if (unp//2)%2==0:
                    #     vac+=unp//2
                    #     unp=0
                    # else:
                    #     vac+=2*(unp//4)
                    #     unp=2
                else:
                    
                    vac+=(unp-1)//2
                    unp=1
                    # if (unp//2)%2==0:
                    #     vac+=unp//2+(unp//2+1)//2
                    #     unp=1
                    # else:
                    #     vac+=(unp//4)+((unp//2+1)//2)

                    #     unp=1
        # print(unp,vac,ans)
    print(ans)
    #l[:0]=s
