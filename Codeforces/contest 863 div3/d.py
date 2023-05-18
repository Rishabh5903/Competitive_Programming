import sys
input = sys.stdin.readline
FibArray = [0, 1]
 
def fibonacci(n):
   
    # Check is n is less
    # than 0
    if n < 0:
        print("Incorrect input")
         
    # Check is n is less
    # than len(FibArray)
    elif n < len(FibArray):
        return FibArray[n]
    else:       
        FibArray.append(fibonacci(n - 1) + fibonacci(n - 2))
        return FibArray[n]
for _ in range(int(input())):
    #n,m=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
