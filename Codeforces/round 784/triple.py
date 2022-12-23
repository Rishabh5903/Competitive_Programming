n=int(input())
L=[]
for i in range(n):
    n1=int(input())

    li=list(map(int, input().split()))
    li.sort()
    if len(li)==1 or len(li)==2:
        L.append(-1)
    else:

        for k in range(0,len(li)-2):

            if li[k]==li[k+1]==li[k+2]:
                L.append(li[k])
                break
            elif k==len(li)-3 :
                L.append(-1)
for i in L:
    print(i)