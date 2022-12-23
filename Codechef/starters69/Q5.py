n=int(input())
li=[]
for i in range(n):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    z=0
    o=0
    t=0
    for j in (l):
        if j%3==0:
            z+=1
        elif j%3==1:
            o+=1
        else:
            t+=1
    ans1=min(o,t)
    # if ans==o:
    num=max(o,t)-ans1
    

    if num%4==0:
        ans1=(ans1+(num//4)*3)
    else:
        ans1=(ans1+(num//4)*3+7-num%4)
    ans2=0
    ans2+=(o//4)*3+(t//4)*3
    o1=o%4
    t1=t%4
    ans2+=min(o1,t1)
    num=max(o1,t1)-min(o1,t1)
    

    if num%4==0:
        ans2=(ans2+(num//4)*3)
    else:
        ans2=(ans2+(num//4)*3+7-num%4)
    ans3=0
    temp=min(o,t)
    if temp%2==0:
        num=max(o,t)+temp//2
        if num%4==0:
            ans3=(ans3+(num//4)*3)
        else:
            ans3=(ans3+(num//4)*3+7-num%4)
    else:
        num=max(o,t)+temp//2-1
        ans3+=1
        if num%4==0:
            ans3=(ans3+(num//4)*3)
        else:
            ans3=(ans3+(num//4)*3+7-num%4)
    li.append(min(ans1,ans2,ans3))
    #l[:0]=s
for i in li:
    print(i)
