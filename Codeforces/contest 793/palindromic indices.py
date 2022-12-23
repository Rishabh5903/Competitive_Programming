n=int(input())
li=[]
def palindrome(l):
    for i in range(0,len(l)//2):
        if l[i]!=l[-i-1]:
            return False
    return True

for i in range(n):
    n1=int(input())
    s=str(input())
    ans=0
    l=[]
    l[:0]=s

    for i in range(0,len(l)):
        l1=l.copy()
        l1.pop(i)


        if palindrome(l1)==True:
            ans+=1
    li.append(ans)
for i in li:
    print(i)

