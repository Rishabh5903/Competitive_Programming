n=input()
li=list(input() for _ in range(int(n)))
def remove(a):
    if len(a)==1:
        print( a)
    elif (a[0] in a[1:])==False:
        print( a)
    else:
        for i in range(0,len(str(a))-1):
            if a[i] in a[i+1:]:
                b=a[i+1:]
                return(remove(b))

for i in range(int(len(li))):
    remove(li[i])