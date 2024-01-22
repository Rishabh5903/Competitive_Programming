import sys
input = sys.stdin.readline
from math import sqrt,ceil,floor,lcm,gcd
def has_subarray_with_equal_alternating_sum(arr):
    even_sum = 0
    odd_sum = 0
    prefix_sum = [0]

    for i, num in enumerate(arr):
        if i % 2 == 0:
            even_sum += num
        else:
            odd_sum += num
        prefix_sum.append(even_sum - odd_sum)

    seen = set()
    for num in prefix_sum:
        if num in seen:
            return True
        seen.add(num)

    return False
for _ in range(int(input())):
    #n,m=map(int,input().split())
    n=int(input())
    #s=str(input())
    l=list(map(int,input().split()))
    if(has_subarray_with_equal_alternating_sum(l)):
        print("YES")
    else:
        print("NO")
    #l[:0]=s
