import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    a=0
    b=0
    c=0
    d=0
    e=0
    f=0
    x=0
    y=0
    for j in range(n1-1):
        if l[j]==1:
            if l[j+1]==1:
                e+=1
            elif l[j+1]==-1:
                x+=1
            b+=1
        elif l[j]==-1:
            if l[j+1]==-1:
                f+=1
            elif l[j+1]==1:
                y+=1
            c+=1
        else:
            if l[j+1]==1:
                a+=1
            elif l[j+1]==-1:
                d+=1
    if l[-1]==1:
        b+=1
    elif l[-1]==-1:
        c+=1
    if b>c:
        if (b-c)%2==1:
            print(-1)
            continue
        elif a+e+y<(b-c)//2:
            print(-1)
            continue
        else:
            temp=(b-c)//2
            # ans=[]
            print(n1-temp)
            for j in range(n1-1):
                if l[j]==0 and l[j+1]==1:
                    if temp>0:
                        print(j+1,j+2)
                        temp-=1
                        l[j+1]=2
                    else:
                        print(j+1,j+1)
                elif l[j]==1 and l[j+1]==1:
                    if temp>0:
                        print(j+1,j+2)
                        temp-=1
                        l[j+1]=2
                    else:
                        print(j+1,j+1)
                elif l[j]==-1 and l[j+1]==1:
                    if temp>0:
                        print(j+1,j+2)
                        temp-=1
                        l[j+1]=2
                    else:
                        print(j+1,j+1)
                elif l[j]==1 or l[j]==-1 or l[j]==0:
                    print(j+1,j+1)
            if l[-1]==0 or l[-1]==1 or l[-1]==-1:
                print(n1,n1)
    elif c>b:
        if (c-b)%2==1:
            print(-1)
            continue
        elif d+f+x<(c-b)//2:
            print(-1)
            continue
        else:
            temp=(c-b)//2
            # ans=[]
            print(n1-temp)
            for j in range(n1-1):
                if l[j]==0 and l[j+1]==-1:
                    if temp>0:
                        print(j+1,j+2)
                        temp-=1
                        l[j+1]=2
                    else:
                        print(j+1,j+1)
                elif l[j]==-1 and l[j+1]==-1:
                    if temp>0:
                        print(j+1,j+2)
                        temp-=1
                        l[j+1]=2
                    else:
                        print(j+1,j+1)
                elif l[j]==1 and l[j+1]==-1:
                    if temp>0:
                        print(j+1,j+2)
                        temp-=1
                        l[j+1]=2
                    else:
                        print(j+1,j+1)
                elif l[j]==1 or l[j]==-1 or l[j]==0:
                    print(j+1,j+1)
            if l[-1]==0 or l[-1]==1 or l[-1]==-1:
                print(n1,n1)
    else:
        print(n1)
        for j in range(n1):
            print(j+1,j+1)
        
