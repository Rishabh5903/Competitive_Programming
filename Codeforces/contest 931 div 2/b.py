from itertools import combinations

def all_subsets(input_list):
    # Initialize an empty list to store all subsets
    subsets = []
    
    # Iterate over all possible lengths of subsets
    for i in range(len(input_list) + 1):
        # Use combinations to generate subsets of current length
        for subset in combinations(input_list, i):
            subsets.append(list(subset))
            # subsets[-1]=subsets.sort()
    
    return subsets
coins = [1, 3, 6, 10, 15]
l = all_subsets(coins)
for i in l:
    i.sort(reverse=True) 
dp=[-1]*
def min_coins(n,l):
    # Triangular numbers as coin values

    # print(l)
    ans = float('inf')
    
    for subset in l:
         # Sort the subset in descending order
        count = 0
        temp = n
        for coin in subset:
            if temp == 0:
                break
            count += temp // coin
            temp %= coin
        if temp == 0:
            ans = min(ans, count)
    
    return ans if ans != float('inf') else -1  # Return -1 if no combination can make n

# Example usage:
t = int(input())
results = []

for _ in range(t):
    n = int(input())
    results.append(min_coins(n,l))

for result in results:
    print(result)
