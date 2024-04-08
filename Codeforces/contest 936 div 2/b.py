from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
mod=1e9+7
def max_subarray_sum_allow_empty(arr):
    """
    Finds the maximum sum of any contiguous subarray within the given array, allowing for the subarray to be empty.
    Returns the maximum subarray sum and the sum of the remaining elements.
    """
    if not arr:  # Handle empty input array
        return 0, 0

    # Initialize variables, considering an empty subarray as a possibility
    max_ending_here = max_so_far = 0
    total_sum = 0
    
    for x in arr:
        # Update total sum
        total_sum += x
        
        # Calculate max ending here, allowing for the reset to 0 (empty subarray)
        max_ending_here = max(0, max_ending_here + x)
        
        # Update max so far
        max_so_far = max(max_so_far, max_ending_here)
    
    # Calculate the sum of the remaining elements
    remaining_sum = total_sum - max_so_far
    
    return max_so_far, remaining_sum

for _ in range(int(input())):
    n,k=map(int,input().split())
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    l=list(map(int,input().split()))
    a,b=max_subarray_sum_allow_empty(l)
    a%=mod
    # print(a,b)
    ans=0
    temp=1
    # for i in range(k):
    #     temp=(temp*2)%mod
    #     temp%=mod
    ans+=(a*pow(2,k,mod))%mod
    ans%=mod
    ans+=b
    ans%=mod
    print(int(ans))
    


    #l[:0]=s
