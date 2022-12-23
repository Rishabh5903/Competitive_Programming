n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l1=list(str(input()).split())
    l2=list(str(input()).split())
    l3=list(str(input()).split())
    p1=0
    p2=0
    p3=0
    for j in l1:
        if (j in l2) and (j in l3):
            l2.remove(j)
            l3.remove(j)
 
        elif (j in l2) and not(j in l3):
            l2.remove(j)
            p2+=1
            p1+=1
        elif (j in l3) and not(j in l2):
            l3.remove(j)
            p3+=1
            p1+=1
        else:
            p1+=3
            continue
    for j in l2:

        if (j in l3) and not(j in l1):
            l3.remove(j)
            p3+=1
            p2+=1

        else:
            p2+=3
            continue
    for j in l3:
        p3+=3
    li.append([p1,p2,p3])

for i in li:
    print(*i)
