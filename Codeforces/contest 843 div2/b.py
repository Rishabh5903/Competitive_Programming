import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n=int(input())
    d={}
    M=[]
    for j in range(n):
        l=list(map(int,input().split()))
        M.append(l)
        for j in l[1:]:
            if not(j in d):
                d[j]=1
            else:
                d[j]+=1
    flag2=False
    for j in range(n):
        flag=True
        for k in M[j][1:]:
            d[k]-=1
        for k in M[j][1:]:
            if d[k]==0:
                flag=False
                break
        if flag:
            print('YES')
            flag2=True
            break
        else:
            for k in M[j][1:]:
                        d[k]+=1
    if not(flag2):
        print("NO")
        
        

    
    #s=str(input())
    # l=list(map(int,input().split()))
    #l[:0]=s
