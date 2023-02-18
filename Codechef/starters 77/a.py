import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n1=int(input())
    s1=str(input())
    s2=str(input())
    d={}
    o=0
    o2=0
    flag=True
    if max(m,n)==n:
        d2={}

        for j in s1:
            if not(j in d):
                d[j]=1
                # o+=1
            else:
                d[j]+=1
        for j in s2:
            if not(j in d):
                flag=False
                break
            else:
                d[j]+=1
            if not(j in d2):
                d2[j]=1
            else:
                d2[j]+=1
        if not(flag):
            print('NO')
            continue
        elif (n+m)%2==0:
            for j in d:
                if d[j]%2==1:
                    o+=1
            if o!=0:
                print('NO')
            elif n==m:
                # print('debug')
                flag=True
                for j in d2:
                    # if d[j]%2==1:
                    if d2[j]!=d[j]//2:
                        # print(d,d2)
                        flag=False
                        break
                if not(flag):
                    print('NO')
                else:
                    print('YES')
            else:
                print('YES')
        else:
            for j in d:
                if d[j]%2==1:
                    o+=1
            for j in d2:
                if d[j]%2==1:
                    if d2[j]>d[j]/2:
                        o2+=1
            if o!=1:
                print('NO')  
            elif o2!=0:
                print('NO')
            else:
                print('YES')  
    elif max(m,n)==m:
        d2={}

        for j in s2:
            if not(j in d):
                d[j]=1
                # o+=1
            else:
                d[j]+=1
        for j in s1:
            if not(j in d):
                flag=False
                break
            else:
                d[j]+=1
            if not(j in d2):
                d2[j]=1
            else:
                d2[j]+=1
        if not(flag):
            print('NO')
            continue
        elif (n+m)%2==0:
            for j in d:
                if d[j]%2==1:
                    o+=1

            if o!=0:
                print('NO')
            elif n==m:
                flag=True
                for j in d2:
                    # if d[j]%2==1:
                    if d2[j]!=d[j]//2:
                        # print(d,d2)
                        flag=False
                        break
                if not(flag):
                    print('NO')
                else:
                    print('YES')
            else:
                print('YES')
        else:
            for j in d:
                if d[j]%2==1:
                    o+=1
            for j in d2:
                if d[j]%2==1:
                    if d2[j]>d[j]/2:
                        o2+=1
            if o!=1:
                print('NO')  
            elif o2!=0:
                print('NO')
            else:
                print('YES')  


