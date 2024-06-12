import sys
input = sys.stdin.readline
from math import floor,sqrt,pow
def floorSqrt(x):
 
    # Base cases
    if (x == 0 or x == 1):
        return x
 
    # Do Binary Search for floor(sqrt(x))
    start = 1
    end = x//2
    while (start <= end):
        mid = (start + end) // 2
 
        # If x is a perfect square
        if (mid*mid == x):
            return mid
 
        # Since we need floor, we update
        # answer when mid*mid is smaller
        # than x, and move closer to sqrt(x)
        if (mid * mid < x):
            start = mid + 1
            ans = mid
 
        else:
 
            # If mid*mid is greater than x
            end = mid-1
 
    return ans
for _ in range(int(input())):
    l,r=map(int,input().split())
    a=floorSqrt(l)
    b=floorSqrt(r)
    # print(a,b)
    ans=0
    # print(r-l,a**2)
    if a==b:
        ans=0
        for i in range(3):
            if l<=a*(a+i) and a*(a+i)<=r:
                ans+=1
        # if l%a==0 or r%a==0:
            # ans+=1
        print(int(ans))
        continue
    ans=(b-a-1)*3
    for i in range(3):
        if l<=a*(a+i) and a*(a+i)<=r:
            ans+=1
        if l<=b*(b+i) and b*(b+i)<=r:
            ans+=1
    # ans=(b-a-1)*3+(pow(a+1, 2)-l-1)//a+1+(r-pow(b, 2))//b+1
    print(int(ans))

    #n=int(input())
    #s=str(input())
    #l=list(map(int,input().split()))
    #l[:0]=s
