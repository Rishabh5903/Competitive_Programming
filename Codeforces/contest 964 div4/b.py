from sys import stdin, stdout
input = stdin.readline
from bisect import bisect, bisect_right, bisect_left
from math import inf, ceil, log2, gcd, lcm, sqrt, log,floor
from heapq import heapify, heappop, heappush
from collections import Counter, deque
def count_suneet_wins(a1, a2, b1, b2):
    win_count = 0
    # Check all possible card flip combinations
    for s1, s2 in [(a1, a2), (a2, a1)]:
        for r1, r2 in [(b1, b2), (b2, b1)]:
            # Simulate the two rounds
            suneet_wins = 0
            slavic_wins = 0
            
            # Round 1
            if s1 > r1:
                suneet_wins += 1
            elif s1 < r1:
                slavic_wins += 1

            # Round 2
            if s2 > r2:
                suneet_wins += 1
            elif s2 < r2:
                slavic_wins += 1
            
            # Check if Suneet wins the game
            if suneet_wins > slavic_wins:
                win_count += 1
    
    return win_count
for _ in range(int(input())):
    a,b,c,d=map(int,input().split())
    print(count_suneet_wins(a,b,c,d))
    #n=int(input())
    #s=str(input())
    #s=s[:len(s)-1]
    #l=list(map(int,input().split()))
    #l[:0]=s
