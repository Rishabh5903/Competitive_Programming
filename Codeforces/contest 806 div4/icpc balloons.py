n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=[]
    l[:0]=str(input())
    solved=[]
    sum=0
    
    for j in l:
        sum+=1
        if not(j in solved):
            solved.append(j)
            sum+=1 
    li.append(sum)
for i in li:
    print(i)
