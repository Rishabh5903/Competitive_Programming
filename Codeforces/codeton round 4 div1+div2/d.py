import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    L=0
    R=0
    ans=[]
    for j in range(n):
        l=list(map(int,input().split()))
        if l[0]==1:
            a,b,n=l[1],l[2],l[3]
            l1=(a-b)*(n-1)+1+b
            r1=(a-b)*(n-1)+1+a-1
            # print(l1,r1)
            if L==R==0:
                ans.append(1)
                L=l1
                R=r1
            else:
                if not(L<=l1<=R or L<=r1<=R):
                    ans.append(0)
                else:
                    ans.append(1)
                    L=max(L, l1)
                    R=min(R, r1)
        else:
            a,b=l[1],l[2]
            if L==R==0:
                ans.append(-1)
            else:
                if (R-a)<L and (R-a)%(a-b)==0:
                    ans.append((R-a)//(a-b)+1)
                elif ((L-1)//(a-b))*(a-b)+a>=R:
                    ans.append((L-1)//(a-b)+1)
                else:
                    ans.append(-1)
    print(*ans)


    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
