n=int(input())
li=[]
for i in range(n):
    M=[]
    for j in range(9):
        
        l=list(map(str,input().split()))
        if j!=0:
            M.append(*l)
    for k in range(1,7):
        for m in range(1,7):
            if M[k][m]!='#':
                continue
            else:
                if (M[k+1][m+1])=='#' and (M[k+1][m-1])=='#' and (M[k-1][m+1])=='#' and (M[k-1][m-1])=='#':
                    li.append([k+1,m+1])
                else:
                    continue
for i in li:
    print(*i)
