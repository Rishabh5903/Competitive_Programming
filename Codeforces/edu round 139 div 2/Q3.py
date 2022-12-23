from sys import stdin,stdout
input = stdin.readline
for _ in range(int(input())):
    l1=[]
    l2=[]
    n1=int(input())
    l1[:0]=str(input())
    l2[:0]=str(input())
    count=0
    if n1==1:
        print('YES')
        continue

    # for j in range(n1):
    #     if l1[j]=='B':
    #         count+=1
    #     if l2[j]=='B':
    #         count+=1
    j=0

    if (l1[0]=='B' and l2[0]=='W') or l1==l2:
        l=l1
    elif l2[0]=='B' and l1[0]=='W':
        l=l2
    else:
        l=max(l1,l2)
        if (l.index('W')%2!=1):
            if l==l1:
                l=l2
            else:
                l=l1

    flag1=True
    while j<n1:
        # if j<n1:
            if l[j]=='B':
                # count-=1
                l[j]='D'
                if l==l1:
                    if l2[j]!='B' :
                        j+=1
                    else:
                        l=l2
                elif l==l2:
                    if l1[j]!='B' :
                        j+=1
                    else:
                        l=l1
            else:
                flag1=False
                break

    # print(flag1,flag2)
    if flag1 :
        print('YES')
    else:
        print('NO')
