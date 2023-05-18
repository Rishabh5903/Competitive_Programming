import sys
input = sys.stdin.readline
for t in range(int(input())):
    m,r,n=map(int,input().split())
    # print(m,r,n)
    #n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if l[0]-r>0 or l[-1]+r<m:
        print('Case #'+str(t+1)+':','IMPOSSIBLE')
        continue
    ans=0
    prev=[]
    if n==1:
        # if 0>=l[0]-r and l[0]+r>=m:
        print('Case #'+str(t+1)+':',1)
    else:
        prev=[l[0]]
        ans=1
        f=1
        for j in range(1,n-1):
            l1=max(0,l[j]-r)
            r1=min(m,l[j]+r)
            l2=max(0,l[j+1]-r)
            r2=min(m,l[j+1]+r)
            a=max(0,prev[-1]-r)
            b=min(m,prev[-1]+r)
            
            if b>=l2:
                continue
            elif b<l1 or r1<l2:
                f=0
                break
            elif a>=l1 and r1>=b:
                prev.pop()
                prev.append(l[j])
            else:
                ans+=1
                prev.append(l[j])
            # if a<=l1 and r1<=b:
            #     continue
            # elif a>=l1 and r1>=b:
            #     prev.pop()
            #     prev.append(l[j])
            # elif b<l1:
            #     f=0
            #     break
            # print(a,b,l1,r1,l2,r2,ans)
        if prev[-1]+r<m:
            prev.append(l[-1])
            ans+=1
        if prev[-1]+r<m:
            f=0
        if f:
           print('Case #'+str(t+1)+':',ans)
        else:
            print('Case #'+str(t+1)+':','IMPOSSIBLE')

        

    #l[:0]=s
