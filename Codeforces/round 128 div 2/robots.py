b=int(input())
def split(word):
    return [char for char in word]
li=[]
for k in range(b):
    M=[]
    n,m=map(int,input().split())
    for h in range(0,n):
        l=list(map(str,split(input())))

        
        M.append(l)
    print(li)
    for i in range(n):
        for j in range(m):
            if M[i][j]=='R':

                for x in range(i,n):
                    for y in range(0,j-1):
                        if M[x][y]=='R':
                            li.append('NO')


                        if x==n-1 and y==j-2:

                            li.append('YES')




for i in li:
    print(i)