import sys
input = sys.stdin.readline

for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    b=str(input())
    a=a[:len(a)-1]
    b=b[:len(b)-1]
    A=a
    if len(b)>len(a):
        a,b=b,a
    cnt=0
    ans=''
    l=[]
    flag=False
    for j in range(len(b)-1):
        
        if b[j:j+2] in a:
            ans='*'+str(b[j:j+2])+'*'
            flag=True
            break
        elif b[j] in a:
            ind=a.index(b[j])
            if ind<=len(a)-2:
                a=a[ind+1:]
            l.append(b[j])
            cnt+=1
    if b[-1] in a:
        l.append(b[-1])
        cnt+=1
    if flag:
        print('Yes')
        print(ans)
    else:
        if len(l)==0:
            print('NO')
        elif (l[0]!=b[0] or l[0]!=A[0]) and (l[-1]!=b[-1] or l[-1]!=A[-1]):
            print('NO')
        else:
            print('YES')
            ans=[]
            if l[0]==b[0]:
                for j in l:
                    ans.append(j)
                    ans.append('*')
                print(''.join(ans))
            else:
                for j in l:
                    ans.append('*')
                    ans.append(j)
                    
                print(''.join(ans))