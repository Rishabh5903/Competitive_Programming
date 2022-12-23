n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int,input().split())
    # n1=int(input())
    s=str(input())
    # l=list(map(int,input().split()))
    # l[:0]=s
    flag=True
    if len(s)==1:
        if not(s=='s' or s=='e' or s=='Y'):
            flag=False
    for j in range(len(s)-1):
        if s[j]=='e':
            if s[j+1]=='s':
                continue
            else:
                flag=False
                break
        elif s[j]=='s':
            if s[j+1]=='Y':
                continue
            else:
                flag=False
                break
        elif s[j]=='Y':
            if s[j+1]=='e':
                continue
            else:
                flag=False
                break
        else:
            flag=False
            break
    if flag:
        li.append('YES')
    else:
        li.append('NO')

for i in li:
    print(i)
