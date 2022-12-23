n=int(input())
li=[]
for i in range(n):
    ans=''
    n1=int(input())
    l=[]
    for j in range(n1):       
        s=str(input())
        l.append(s)
    for p in l:
        condn=True
        for q in l:
            if not(p.startswith(q)):
                continue
            else:
                    
                for r in l:
                    if not (p.endswith(r)):
                        continue
                    else:

                        if p==q+r and condn:
                            ans+='1'
                            condn=False
                            break
            if condn==False:
                break
        if condn==False:
            continue                            
        if condn==True:
            ans+='0'
    li.append(ans)

for i in li:
    print(i)
