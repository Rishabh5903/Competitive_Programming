import sys
input = sys.stdin.readline
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(str,input().split()))
    # maxo=1
    s1=''
    s2=''
    if n==2:
        if l[0]==l[1]:
            print('YES')
        else:
            print('NO')
        continue
    for j in l:
        # print(len(j))
        if len(j)==n-1:
            # maxo=len(j)
            if s1=='':
                s1=j
            else:
                s2=j
    # print(s1,s2)
    if s1[1:]==s2[:n-2]:
        s=s1+s2[n-2]
    else:
        s=s2+s1[n-2]
    # print(s)
    flag=True
    for j in range(len(s)//2):
        if not(s[j]==s[-(j+1)]):
            flag=False
            break
    if flag:
        print('YES')
    else:
        print('NO')

    #l[:0]=s
