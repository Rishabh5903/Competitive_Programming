from collections import defaultdict

def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    T = int(data[0])  # Number of test cases
    idx = 1
    results = []
    
    for _ in range(T):
        N = int(data[idx])  # Length of string S
        idx += 1
        S = data[idx]  # String S
        idx += 1
        P = data[idx]  # Permutation string P
        idx += 1
        
        # Map each character to its index in P
        char_to_pos = {ch: i + 1 for i, ch in enumerate(P)}
        
        # Determine possible transformations
        possible_transforms = defaultdict(set)
        for ch in P:
            pos = char_to_pos[ch]
            transform_pos = 27 - pos
            if 1 <= transform_pos <= 26:
                possible_transforms[ch].add(P[transform_pos - 1])
            possible_transforms[ch].add(ch)
        
        # Group characters into disjoint sets (connected components)
        visited = set()
        groups = []
        
        def dfs(ch, group):
            if ch in visited:
                return
            visited.add(ch)
            group.add(ch)
            for next_ch in possible_transforms[ch]:
                dfs(next_ch, group)
        
        for ch in P:
            if ch not in visited:
                group = set()
                dfs(ch, group)
                groups.append(group)
        
        # Assign sorted order within each group
        group_to_sorted = {}
        for group in groups:
            sorted_chars = sorted(group)
            for ch in group:
                group_to_sorted[ch] = sorted_chars[0]
        
        # Attempt to sort S using the mappings
        sorted_s = ''.join(sorted(S))
        transformed_s = ''.join(group_to_sorted[ch] for ch in S)
        
        if transformed_s != sorted_s:
            results.append(-1)
        else:
            # Count the minimum operations needed
            operations = 0
            for ch, target_ch in zip(S, sorted_s):
                if ch != target_ch:
                    operations += 1
            results.append(operations)
    
    sys.stdout.write("\n".join(map(str, results)) + "\n")
