import sys
input = sys.stdin.readline
for t in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    a=str(input())
    b=str(input())
    f1=0
    f2=0
    cnt=0
    z=[]
    if not(('1' in a)) and not(('1' in b)):
        print('YES')
        print(0)
        continue
    if (not(('0' in a)) and not(('0' in b))):
        print('YES')
        print(2)
        print(1,1)
        print(2,n)
        continue
    
    for j in range(n):
        if (a[j]=='0' and b[j]=='1') or (a[j]=='1' and b[j]=='0'):
            f1=1
        elif (a[j]==b[j]):
            f2=1
    if f1 and f2:
        print('NO')
        continue
    print('YES')
    ind=-1
    if f1:
        a=b
    if a[0]=='0':
        ind=0
    for j in range(n-1):
        if a[j]=='1' and a[j+1]=='0':
            ind=j+1
        if a[j]=='0' and a[j+1]=='1':
            if ind!=-1:
                z.append((ind,j))
                ind=-1
    if ind!=-1:
        z.append((ind,n-1))
    # print(z)
    # if f2:



    if len(z)%2==1:
        if f2:
            print(len(z)+1)
        else:
            print(len(z)+2)
            print(1,n)
        for j in range(len(z)-1):
            print(z[j][0]+1,z[j][1]+1)
        if z[-1][0]==0:

                # print(2)
            print(1,n)
            print(1,z[-1][1]+1)

            # continue
        elif z[-1][1]==n-1:

            print(1,n)
            print(z[-1][0]+1,n)
            # continue
        else:
            print(1,z[-1][0])
            print(z[-1][0]+2,n)
    else:
        if f2:
            print(len(z)+2)
        else:
            print(len(z)+3)
            print(1,n)
        # print(1,n)
        for j in range(len(z)):
            print(z[j][0]+1,z[j][1]+1)
        print(1,1)
        print(2,n)
