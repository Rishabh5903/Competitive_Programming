l=[2,3,5,7]
for i in range(1,7):
    for j in range(1,7):
        if(i!=j and (i^j in l)):
            print(i,j)