n=int(input())
li=[]
for i in range(n):
    l=list(map(int,input().split()))
    if l[0]*l[1]/l[3]==l[0]*l[2]/l[4]:
        li.append('ANY')
    elif max(l[0]*l[1]/l[3],l[0]*l[2]/l[4]) == l[0]*l[1]/l[3]:
        li.append('DIESEL')
    elif max(l[0]*l[1]/l[3],l[0]*l[2]/l[4]) == l[0]*l[2]/l[4]:
        li.append('PETROL')

        

for i in li:
    print(i)
