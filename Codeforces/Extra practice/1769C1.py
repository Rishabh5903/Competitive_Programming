import sys
input = sys.stdin.readline
for i in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    ans=0
    if n1==1:
        print(1)
        continue
    for j in range(n1-1):
        temp=1
        l=l1.copy()

        
        # l[j]+=1
        flag1=True
        flag2=True
        prev=1
        for k in range(j,n1-1):
            if l[k+1]==l[k]:
                if k>=2:
                    if l[k-1]==l[k]-1 and l[k-2]==l[k-1]:
                        temp-=1
                # flag=True
                if flag2:
                    temp+=1
                    flag2=False
                    prev+=1
            elif l[k+1]==l[k]+1:
                # if k>=1:
                #     if l[k-1]==
                temp+=1
                prev=1
                flag2=True
                # flag=True
                
            elif l[k+1]==l[k]+2:
                flag2=True
                if flag1:
                    temp+=1
                    prev=1
                    flag1=False
                    # flag2=True
                elif prev>1:
                    temp+=1
                    prev=1
                    
                else:
                    # print(j,ans)
                    break

                
            else:
                # print(j,ans)
                break
            temp=min(temp, l[k+1]+1)
        ans=max(ans, temp)
    if i==58:
        print(l1)
    print(ans)
    #l[:0]=s
