n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    if n1>=1900:
        li.append('Division 1')
    elif n1>=1600 and n1<=1899:
        li.append('Division 2')
    elif n1>=1400 and n1<=1599:
        li.append('Division 3')
    elif n1<=1399:
        li.append('Division 4')
for j in li:
    print(j)