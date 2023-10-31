from array import array

class SegmentTree:
    def __init__(self, n):
        self.size = 1
        while self.size < n:
            self.size *= 2
        self.tree = array('i', [0] * (2 * self.size+2))
        self.lazy = array('i', [0] * (2 * self.size+2))
    
    def update(self, node, start, end, left, right, value):
        if left > end or right < start:
            return
        if left <= start and right >= end:
            self.lazy[node] += value
            self.tree[node] += value
        else:
            mid = (start + end) // 2
            self.update(2 * node, start, mid, left, right, value)
            self.update(2 * node + 1, mid + 1, end, left, right, value)
            self.tree[node] = max(self.tree[2 * node], self.tree[2 * node + 1]) + self.lazy[node]
    
    def query(self):
        return self.tree[1]

def solve():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        segments = []
        for _ in range(n):
            l, r = map(int, input().split())
            segments.append((l, r))
        
        segments.sort()  # Sort segments by the left endpoint
        
        a = [0] * (m + 2)
        segment_tree = SegmentTree(m + 2)
        max_cost = 0
        
        for l, r in segments:
            segment_tree.update(1, 1, m, l, r, 1)
            max_cost = max(max_cost, segment_tree.query())
        
        print(max_cost)

solve()
