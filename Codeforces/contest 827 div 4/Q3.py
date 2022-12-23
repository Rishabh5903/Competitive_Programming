n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    # n1=int(input())
    # print(li)

    M=[]
    s1=str(input())
    # s2=str(input())
    for j in range(8):

        # if j==0:

        # s2=str(input())
        s=str(input())
        l=[]
        l[:0]=s
        M.append(l)
    flag1=True
    for j in range(8):
        if not ('.' in M[j]) and not ('R' in M[j]):
            li.append('B')
            flag1=False
            break
        elif not ('.' in M[j]) and not ('B' in M[j]):
            li.append('R')
            flag1=False
            break
    if flag1:
            
        for j in range(8):
            flag=True
            # print(M)
            for k in range(7):
                if M[k][j]!='.' and M[k][j]==M[k+1][j]:
                    continue
                else:
                    flag=False
                    break
            if flag:
                if M[0][j]=='R':
                    li.append('R')
                    break
                else:
                    li.append('B')
                    break
    
        

    # l=list(map(int,input().split()))
for i in li:
    print(i)
