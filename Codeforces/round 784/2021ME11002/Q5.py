def pattern(a):
    if(a<=0):
        raise ValueError()
    if(a==1):
        return(str(111))
    
    else:
        return(str(a)+str(pattern(a-1))+str(a)+str(pattern(a-1))+str(a))

a=int(input())
print(pattern(a))