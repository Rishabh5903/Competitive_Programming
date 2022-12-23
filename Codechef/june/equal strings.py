n=int(input())
li=[]
for i in range(n):
    l3=[]
    n1=int(input())
    l1=str(input())
    l2=str(input())
    for j in range(n1):
        if l1[j]==l2[j]:
            continue
        elif (l1[j]!=l2[j]) and (l2[j] in l3):
            continue
        else:
            l3.append(l2[j])
    li.append(len(l3))

for i in li:
    print(i)
