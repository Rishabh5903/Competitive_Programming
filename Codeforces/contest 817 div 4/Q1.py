from itertools import permutations
n=int(input())
li=[]
for i in range(n):
    n1=int(input())
    s=str(input())
    permlist=permutations('Timur')
    l=[]
    for perm in permlist:
        l.append(''.join(perm))
    if s in l:
        li.append('YES')
    else:
        li.append('NO')

for i in li:
    print(i)
