import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    one=[]
    lis=[]
    for j in l:
        if j==1:
            one.append(1)
        else:
            lis.append(j)
    lis.sort()
    lis.reverse()
    ans=0
    if len(one)==0:
        print(0)
        continue
    else:
        one.pop()
        ans+=1
        j=2
        while len(one)>0:
            # print(lis,ans)
            if len(lis)>0:

                if lis[-1]<=j:
                    # print('debug')
                    # print(lis[-1],ans)
                    lis.pop()
                    ans+=1
                    j+=1
                    one.pop()
                else:
                    if len(one)>=2:
                        # print('debug')
                        one.pop()
                        one.pop()
                        ans+=1
                        j+=1
                    else:
                        break
            else:
                if len(one)>=2:
                    one.pop()
                    one.pop()
                    ans+=1
                else:
                    break
        print(ans)
                
            

    #l[:0]=s
