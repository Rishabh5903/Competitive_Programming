from statistics import mode
def counter(l):
    max = 0
    res = l[0]
    for i in l:
        freq = l.count(i)
        if freq > max:
            max = freq
            res = i
    return max
n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    z=[]
    sum=[l[0]]
    ans=0
    if l[0]==0:
        z.append(0)
    for j in range(1,n1):
        if l[j]==0:
            z.append(j)
        sum.append(sum[-1]+l[j])
    for j in range(len(z)-1):
        ans+=counter(sum[z[j]:z[j+1]])
        # print(ans)
    if len(z)>=1:
        ans+=counter(sum[z[-1]:len(sum)])
        ans+=sum[0:z[0]].count(0)
    else :
        ans=sum.count(0)
    # if sum[z[-1]]==0:
    li.append(ans)
    # else:

        # li.append(ans+1)
    # print(z)
    # print(sum)
for i in li:
    print(i)
