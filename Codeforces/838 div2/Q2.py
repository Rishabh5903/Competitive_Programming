import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    l1=list(map(int,input().split()))
    if n1==1:
        print(0)
        continue
    ans=[]
    l=[]
    for j in range(n1):
        l.append([l1[j],j+1])
    l.sort()
    # print(l)
    # if l[0][0]==2:
    #     ans.append((l[0][1],2))
    #     ans.append((l[0][1],1))
    #     l[0][0]=5
    # elif l[0][0]==3:
    #     ans.append((l[0][1],2))
    #     l[0][0]=5
    # elif l[0][0]==4:
    #     ans.append((l[0][1],1))
    #     l[0][0]=5
    # elif l[0][0]>5:
    #     if not(l[0][0]%5==0):
    #         ans.append((l[0][1],5*(l[0][0]//5+1)-l[0][0]))
    #         l[0][0]=5*(l[0][0]//5+1)
    for j in range(1,n1):
        if l[j][0]%l[j-1][0]!=0:
            ans.append((l[j][1],l[j-1][0]*(l[j][0]//l[j-1][0]+1)-l[j][0]))
            l[j][0]=l[j-1][0]*(l[j][0]//l[j-1][0]+1)
    print(len(ans))
    for j in ans:
        print(j[0],j[1])


    #l[:0]=s
