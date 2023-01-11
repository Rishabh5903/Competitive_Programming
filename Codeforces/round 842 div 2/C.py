import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n1,n2=map(int,input().split())
    n1=int(input())
    #s=str(input())
    lis=list(map(int,input().split()))
    l=[]
    for j in range(n1):
        l.append((lis[j],j))
    l.sort()
    d1={}
    d2={}
    m1=1
    m2=1
    l1=[0]*n1
    l2=[0]*n1
    flag=True
    # print(l)
    for j in l:
        # print(l1)
        # print(l2)
        if (j[0] in d1):
            # print(l1)
            # print(l2)
            # print(m1)
            if not(j[0] in d2):
                l2[j[1]]=j[0]
                d2[j[0]]=1
                if not(m1 in d1):
                    

                    if m1<=j[0]:
                        l1[j[1]]=m1
                        d1[m1]=1
                        m1+=1
                        while m1 in d1:
                            m1+=1
                    else:
                        flag=False
                        break
                else:
                    while m1 in d1:
                        m1+=1
                    if m1<=j[0]:
                        l1[j[1]]=m1
                        d1[m1]=1
                        m1+=1
                        while m1 in d1:
                            m1+=1
                    else:
                        flag=False
                        break
            else:
                flag=False
                break
 
        else:
            l1[j[1]]=j[0]
            d1[j[0]]=1
            if not(m2 in d2):
                
                
                if m2<=j[0]:
                    l2[j[1]]=m2
                    d2[m2]=1
                    m2+=1
                    while m2 in d2:
                        m2+=1
                else:
                    flag=False
                    break
            else:
                while m2 in d2:
                    m2+=1
                if m2<=j[0]:
                    l2[j[1]]=m2
                    d2[m2]=1
                    m2+=1
                    while m2 in d2:
                        m2+=1
                else:
                    flag=False
                    break
    if flag:
        print("YES")
        print(*l1)
        print(*l2)
    else:
        print("NO")   


    #l[:0]=s
