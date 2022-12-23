n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    l=list(map(int,input().split()))
    for j in range(n1):
        l1=[]
        n2,l1[:0]=input().split()

        for k in l1:
            
            if k==str('D'):
                if l[j]==9:
                    l[j]=0
                    
                else:
                    l[j]+=1
                    
            elif k=='U':
                if l[j]==0:
                    l[j]=9
                    
                else:
                    l[j]-=1

    li.append(l)
for i in li:
    print(*i)
