n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(map(int,input().split()))
    l1=[]
    for j in range(0,len(l)):
        k=1

        if len(l)==1:
            li.append(-1)
            break
        
        elif l[len(l)-2]!=l[len(l)-1]:
            li.append(-1)
            break
        elif j<len(l)-2 and l[j+1]==l[j]:
            l1.append(j+2)
        elif j==len(l)-2 and l[j+1]==l[j]:
            l1.append(j+2)
            l1.append(k)

        elif j<=len(l)-3 and l[j+1]!=l[j] and l[j+2]!=l[j+1]:
            li.append(-1)
            break

        else:
            l1.append(k)
 
            locals()[k]=j+2
        if j==len(l)-2:
            li.append(l1)
    
for i in li:
    if type(i)==int:
        print(i)
    else:
        print(*i)
        
        