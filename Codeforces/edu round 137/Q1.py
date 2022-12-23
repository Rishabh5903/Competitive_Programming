def nCr(n, r):
 
    return (fact(n) / (fact(r)
                * fact(n - r)))
 
# Returns factorial of n
def fact(n):
    if n == 0:
        return 1
    res = 1
     
    for i in range(2, n+1):
        res = res * i
         
    return res
n=int(input())
li=[]
for i in range(n):
    # n1,n2=map(int.input().split())
    n1=int(input())
    # s=str(input())
    l=list(map(int,input().split()))
    # l[:0]=s
    li.append(int(6*nCr(10-n1, 2)))
for i in li:
    print(i)
