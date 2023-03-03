import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    # print(len(s)-1)
    if len(s)==1:
        print(s)
        continue
    ans=[0]*(len(s))


    #l=list(map(int,input().split()))
    l=[]
    l[:0]=s
    l.sort()
    temp=[]
    var=0
    for j in range(len(l)-1):
        if l[j+1]==l[j]:
            var=j
            break
        else:
            temp.append(l[j])
    # if var<=len(l)-2:
    n=len(ans)
    ans[-1]=l[var]
    ans[0]=l[var+1]
    a=1
    b=n-2
    for j in range(len(temp)):
        if j%2==0:
            ans[b]=temp[j]
            b-=1
        else:
            ans[a]=temp[j]
            a+=1
    for j in range(var+2,n):
        # if len(temp)%2==0:
            if j%2==0:
                ans[b]=l[j]
                b-=1
            else:
                ans[a]=l[j]
                a+=1
    # print(ans)
    print(''.join(ans))

