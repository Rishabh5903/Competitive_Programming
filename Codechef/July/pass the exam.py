n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    sum=0
    for j in range(len(l)):
        sum+=l[j]
        if l[j]<10 and j<len(l)-1:
            li.append('FAIL')
            break
        elif j==len(l)-1:
            if l[j]<10 or sum<100:
                li.append('FAIL')
                break
            else:
                li.append('PASS')
            
        else:
            continue
           
for i in li:
    print(i)
