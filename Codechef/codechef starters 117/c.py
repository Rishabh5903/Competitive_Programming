from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
for _ in range(int(input())):
    a,b=map(int,input().split())
    if(a>b):
        a,b=b,a
    d=b-a
    num=((-1+sqrt(1+8*d))//2)
    var=2*(d-(num*(num+1))//2)
    ans=num+var
    for k in range(int(ans+1)):
        if(k%2):
            val1=(k*(k+1))//2+(d+ceil(k/2))
            
            num1=((-1+sqrt(1+8*val1))//2)
            var1=2*(d+ceil(k/2)-((num1*(num1+1))//2-(k*(k+1))//2))
            val2=(k*(k+1))//2+(d-ceil(k/2))
            if(val2>=0):
                num2=((-1+sqrt(1+8*val2))//2)
                
                var2=2*(d-ceil(k/2)-((num2*(num2+1))//2-(k*(k+1))//2))
                if(var2>=0):
                    ans=min(ans,num2+var2)
            # if(((-1+sqrt(1+8*val1))//2 == (-1+sqrt(1+8*val1))/2) or ((-1+sqrt(1+8*val2))//2 == (-1+sqrt(1+8*val2))/2)):
            if(var1>=0):
                ans=min(ans,num1+var1)
        else:
            val1=(k*(k+1))//2+(d+floor(k/2))
            
            num1=((-1+sqrt(1+8*val1))//2)
            var1=2*(d+floor(k/2)-((num1*(num1+1))//2-(k*(k+1))//2))
            val2=(k*(k+1))//2+(d-floor(k/2))
            if(val2>=0):
                num2=((-1+sqrt(1+8*val2))//2)
                
                var2=2*(d-floor(k/2)-((num2*(num2+1))//2-(k*(k+1))//2))
                if(var2>=0):
                    ans=min(ans,num2+var2)
            # if(((-1+sqrt(1+8*val1))//2 == (-1+sqrt(1+8*val1))/2) or ((-1+sqrt(1+8*val2))//2 == (-1+sqrt(1+8*val2))/2)):
            if(var1>=0):
                ans=min(ans,num1+var1)
    print(int(ans))

    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
