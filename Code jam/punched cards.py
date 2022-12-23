n=input()
for i in range(int(n)):
    a,b=input().split()
    a=int(a)
    b=int(b)



    print('Case #'+str(i+1)+'\n' +'..'+'+-'*(b-1)+'+ \n' '..'+'|.'*(b-1)+'| \n' + ('+-'*b + '+ \n' + '|.'*b +'| \n')*(a-1) +'+-'*b +'+')
