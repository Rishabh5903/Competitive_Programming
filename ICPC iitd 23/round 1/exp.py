def fn(a,b):
  #a,b=[int(h) for h in input().split()]
  b=str(b)
  tem=len(b)
  flag=0
  while True:
    if int(b)>a and (int(b)-a)%9==0:
        break
    
    b="1"+b
    if int(b)>10**18:
        flag=1
        break
    
  if flag:
    return -1
  else:
    return 1
    print("Stable")
    ans1=(int(b)-a)//9
    cnt=0
    ans2=len(b)-tem
    if ans1>0:
        cnt+=1
    if ans2>0:
        cnt+=1
    print(b,"hey")    
    print(cnt)
    if ans1>0:
      print("+",ans1)
    if ans2>0:  
      print("-",ans2)
for i in range(100):
    for j in range(1000):
        if fn(i,j)==-1:
            print(i,j)