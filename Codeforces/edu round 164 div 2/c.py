from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def swap_to_maximize(x, y):
    # Convert integers to list of digits (as strings for easy manipulation)
    x_digits = list(str(x))
    y_digits = list(str(y))
    
    # Ensure that initially x is the larger number
    if int(''.join(x_digits)) < int(''.join(y_digits)):
        x_digits, y_digits = y_digits, x_digits
    # print(x_digits,y_digits)
    # Find the first index where the digits of x are greater than y
    first_distinct_index = None
    for i in range(min(len(x_digits), len(y_digits))):
        if x_digits[i] > y_digits[i]:
            first_distinct_index = i
            break
    
    # If such an index is found, swap all subsequent where y >= x
    if first_distinct_index is not None:
        for i in range(first_distinct_index + 1, min(len(x_digits), len(y_digits))):
            if y_digits[i] < x_digits[i]:
                x_digits[i], y_digits[i] = y_digits[i], x_digits[i]
    
    # Convert lists back to integers
    x = int(''.join(x_digits))
    y = int(''.join(y_digits))
    
    return x, y

for _ in range(int(input())):
    #n,m=map(int,input().split())
    x=int(input())
    y=int(input())
    if(x<y):
        x,y=y,x
    # l1=[]
    # l2=[]
    # while(x):
    #     l1.append(x%10)
    #     x//=10
    # while(y):
    #     l2.append(y%10)
    #     y//=10
    # l1.reverse()
    # l2.reverse()
    x,y=swap_to_maximize(x,y)
    print(x)
    print(y)
    # if(len(l1)>len(l2)):
    #     for i in range(1,)

    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
