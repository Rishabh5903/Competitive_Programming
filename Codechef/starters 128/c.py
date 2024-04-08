from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def max_length_non_decreasing_subarray(arr):
    # Initialize the maximum length and current length to 1
    # because the minimum length of any non-empty subarray is 1
    max_length = 0
    current_length = 1
    
    # Iterate through the array starting from the second element
    for i in range(1, len(arr)):
        # If the current element is greater than or equal to the previous one,
        # it is part of a non-decreasing subarray
        if arr[i] >= arr[i-1]:
            # Increase the length of the current non-decreasing subarray
            current_length += 1
        else:
            # Update the maximum length if the current length is greater
            max_length = max(max_length, current_length)
            # Reset the current length to 1
            current_length = 1
            
    # Update the maximum length for the last subarray
    max_length = max(max_length, current_length)
    
    return max_length
def arrange_tuples(arr):
    # Define a custom sort key
    def sort_key(t):
        # This mapping directly translates the tuple to a rank
        return {
            (0, 0): 0,
            (0, 1): 1,
            (1, 0): 2,
            (1, 1): 3
        }.get(t, 4)  # Any tuple not in the mapping gets placed at the end

    arr.sort(key=sort_key)
    return arr
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    s=str(input())
    s=s[:len(s)-1]
    l=[]
    l[:0]=s
    # l=list(map(int,input().split()))

    temp3=[]
    for i in range(n):
        if(i%2==0):
            temp3.append((l[i],l[i+1]))
    temp=[]
    temp2=[]
    f1=0
    f2=0
    f3=0
    f4=0
    for i in temp3:
        if(i==('1','0') ):
            # temp.append(i)
            f1+=1
        elif(i==('1','1')):
            f2+=1
        elif(i==('0','1')):
            f3+=1
        elif(i==('0','0')):
            f4+=1
    print(2*f4+2*f2+min(2,f1)+min(2,2*f3))
    
