from string import ascii_lowercase
def alpha(n):
    if n==1:
        return 'a'
    elif n==2:
        return 'b'
    elif n==3:
        return 'c'
    elif n==4:
        return 'd'
    elif n==5:
        return 'e'
    elif n==6:
        return 'f'
    elif n==7:
        return 'g'
    elif n==8:
        return 'h'
    elif n==9:
        return 'i'
    elif n==10:
        return 'j'
    elif n==11:
        return 'k'
    elif n==12:
        return 'l'
    elif n==13:
        return 'm'
    elif n==14:
        return 'n'
    elif n==15:
        return 'o'
    elif n==16:
        return 'p'
    elif n==17:
        return 'q'
    elif n==18:
        return 'r'
    elif n==19:
        return 's'
    elif n==20:
        return 't'
    elif n==21:
        return 'u'
    elif n==22:
        return 'v'
    elif n==23:
        return 'w'
    elif n==24:
        return 'x'
    elif n==25:
        return 'y'
    elif n==26:
        return 'z'

n=int(input())

for i in range(n):
    s=str(input())
    p=int(input())
    l=[]
    l[:0]=s
    print(l)
    l1=[]
    for j in  l:
        l1.append(ascii_lowercase.index(j)+1)
    
    l1=sorted(l1)
    print(l1)
    flag=True
    sum=0
    for j in range(len(l1)):
        print(l)
        while flag:
            if sum<p:
                if j<=len(l1)-2:
                    sum+=l1[j]
                elif j==len(l1)-1:
                    if (sum+l1[j])<=p:
                        sum+=l1[j]
                    else:
                        l.remove(alpha(l1[len(l1)-1]))
            elif sum==p:
                flag=False
                for k in range(j,len(l1)):
                    l.remove(alpha(l1[k]))
                
                break
            elif sum>p:
                flag=False
                for k in range(j,len(l1)):
                    l.remove(alpha(l1[k]))
                break
        print(l)
    print(*l,sep='')

