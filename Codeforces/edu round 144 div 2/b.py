import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    a=str(input())
    a=a[:len(a)-1]
    b=str(input())
    b=b[:len(b)-1]
    if len(b)>len(a):
        a,b=b,a
    # print(a,b)
    l=[]
    i=0
    flag=False
    while i<len(b):
        temp=[]
        
        k=i
        if flag:
            break
        while k<len(b)+1:
                # print(i,k,len(b),b[i:k+1])
                # print(i,k,temp,l)
                if b[i:k+1] in a:
                    # print('debug')

                    if k<=len(b)-1:
                        temp.append(b[k])
                        # print(temp)
                    if k==len(b)-1:
                        l.append(''.join(temp))
                        temp=[]
                        flag=True
                        break
                else:
                    # print(temp)
                    if temp!=[]:
                        # if 
                        l.append(''.join(temp))
                        temp=[]
                        i=k
                k+=1
        # print(i,temp)
        i+=1
    # print(l)
    if temp!=[]:
        l.append(''.join(temp))
    # print(l)
    # print(l)   
    if len(l)==0:
        print('NO')
        continue
    else:
        var=len(l)-1
        s1=''
        s2=''
        if l[0]!='':
            if l[0][0]!=b[0]:
                s1='*'
                var+=1
        if l[-1]!='':
            if l[-1][0]!=b[-1]:
                s2='*'
                var+=1
        # var+=len(l)-1
        st=''.join(l)
        if var>len(st):
            print('NO')
        else:
            print('YES')
            ans=[]
            if s1!='':
                ans.append('*')
            # print(l)
            for j in range(len(l)-1):
                # if j!=len(l)-1:
                    ans.append(l[j])
                    ans.append('*')
            ans.append(l[-1])
            if s2!='':
                ans.append('*')
            if s1=='' and s2=='':
                ans.append('*')
            print(''.join(ans))
            

    #l=list(map(int,input().split()))
    #l[:0]=s
    # for j in range(len(b)):
    #     temp=[]
    #     for k in range(j,len(b)+1):
    #         temp