import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    M=[]
    tot=0
    ones=[]
    for _ in range(n):
        l=list(map(int,input().split()))
        temp=0
        for j in l:
            if j==1:
                temp+=1
        ones.append(temp)
        tot+=temp
        M.append(l)
    if tot%n!=0:
        print(-1)
        continue
    k=tot//n
    plus=[]
    minus=[]
    ans1=0
    for j in range(len(ones)):
        if ones[j]>k:
            temp=ones[j]-k
            plus.append((temp,j))
            ans1+=temp
        elif ones[j]<k:
            minus.append((k-ones[j],j))
    print(ans1)
    if ans1==0:
        continue
    i1=0
    i2=0
    count1=plus[0][0]
    count2=minus[0][0]
    while ans1>0:
        if count1>0 and count2>0:
            for k in range(m):
                if count1>0 and count2>0 and ans1>0 and i1<len(plus) and i2<len(minus):
                    if M[plus[i1][1]][k]==1 and M[minus[i2][1]][k]==0:
                        print(minus[i2][1]+1,plus[i1][1]+1,k+1)
                        M[plus[i1][1]][k]=0
                        M[minus[i2][1]][k]=1
                        count2-=1
                        count1-=1
                        ans1-=1
                else:
                    break
        if count1==0:
            if ans1>0:
                i1+=1
                count1=plus[i1][0]
            else:
                break
        if count2==0:
            if ans1>0:
                i2+=1
                count2=minus[i2][0]
            else:
                break