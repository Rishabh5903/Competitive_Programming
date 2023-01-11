import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    temp=0
    if n1%2==1:
        ans=[]
        for j in range(1,(n1**2)//2+1):
            ans.append(j)
            ans.append(n1**2-j+1)
        ans.append((n1**2)//2+1)
        for j in range(n1):
            print(*ans[n1*j:n1*(j+1)])
    else:
        temp=1
        for j in range(n1):
            ans=[]
            for k in range(n1//2):
                # if j%2==0:
                    ans.append(temp)
                    ans.append((n1**2)-temp+1)
                    temp+=1
            if j%2==0:
                print(*ans)
            else:
                ans.reverse()
                print(*ans)
                    
                    
        # for j in range(n1):
        #     ans=[]
        #     for k in range(n1):
        #         if k%2==0:
        #             ans.append(temp+1)
        #             ans.append(n1**2-temp+1)
        #             temp+=1
        #             print(*ans)
        #         else:
        #             ans.append(n1**2-temp+1)
        #             ans.append(temp+1)
                    
        #             print(*ans)
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
