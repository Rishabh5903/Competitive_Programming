n=int(input())

for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    s=str(input())
    if not('1' in s) or not('0' in s):
        print(-1)
        continue
    else:
        one=0
        zero=0
        for j in s:
            if j=='1':
                one+=1
            else:
                zero+=1
        k=max(zero,one)
        ans=[]
        if k==zero:
            k=n1
            for j in range(2*n1):
                if k==0:
                    break
                
                if s[j]=='0':
                    ans.append(j+1)
                    k-=1
            print(*ans)
        else:
            k=n1
            for j in range(2*n1):
                if k==0:
                    break
                if s[j]=='1':
                    ans.append(j+1)
                    k-=1
            print(*ans)
    #l=list(map(int,input().split()))
    #l[:0]=s

