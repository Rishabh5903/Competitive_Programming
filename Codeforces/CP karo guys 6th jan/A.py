import sys
input = sys.stdin.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    #n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    d={}
    l=[]
    for j in range(n):
        l.append((l1[j],j+1))
    l.sort()
    flag=True
    for j in range(n):
        if flag:
            if j+1>l[j][1] :
                for k in range(l[j][1],j+1):
                    if k in d:
                        continue
                    elif k in l2:
                        d[k]=1
                    else:
                        flag=False
                        break
            else:
                for k in range(j+1,l[j][1]):
                    if k in d:
                        continue
                    elif k in l2:
                        d[k]=1
                    else:
                        flag=False
                        break
        else:
            break
    if flag:
        print("YES")
    else:
        print("NO")

    #l[:0]=s
