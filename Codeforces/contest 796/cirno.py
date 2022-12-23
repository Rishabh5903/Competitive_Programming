n=int(input())
li=[]
for m in range(n):
    n1=int(input())
    l=list(bin(n1))
    l.pop(0)
    l.pop(0)
    print(l)
    print(li)
    if not('0' in l):
        if l[-1]=='1':
            li.append(3)
            continue
        else:
            li.append(1)
            continue
    for i in range(1,len(l)+1):
        ans=True
        if l[-i]=='0':
            continue
        
        elif l[-i]=='1' and ans:
            if i==len(l):
                li.append(2**(i-1)+1)
                m+=1
            else:
                for j in range(i+1,len(l)+1):
                    if l[-j]=='1':
                        if i==1:
                            li.append(1)
                            continue
                        else:
                            li.append(2**(j-1))
                            continue
                    elif j==len(l) and l[-j]!='1':
                        ans=False
                while not(ans):
                    for k in range(1,i):
                        if l[-k]=='0':
                            if k==1:
                                li.append(2**(j-1)+1)
                                m+=1
                            else:
                                li.append(2**(j-1)+2**(k-1))
                                m+=1


for i in li:
    print(i)