n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    # n2=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    ans=0
    for j in range(n1):
        freq=[0]*10
        distinct=0
        maxo=0
        for k in range(j,n1):
            if k-j>=101:
                break
            elif freq[int(s[k])]==0:
                # freq[int(s[k])]+=1
                distinct+=1
            freq[int(s[k])]+=1
            maxo=max(maxo,freq[int(s[k])])
            if maxo<=distinct:
                ans+=1
    li.append(ans)

for i in li:
    print(i)
