r,g,b=map(int,input().split())
if r%2==0:
    n1=r//2
else:
    n1=r//2+1
if g%2==0:
    n2=g//2
else:
    n2=g//2+1
if b%2==0:
    n3=b//2
else:
    n3=b//2+1
print(max((n1-1)*3+30,(n2-1)*3+31,(n3-1)*3+32))