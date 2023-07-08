class SegmentTree:
    def __init__(self, arr):
        self.arr = arr
        self.tree = [0] * (4 * len(arr))
        self.build(1, 0, len(arr) - 1)
    
    def build(self, node, start, end):
        if start == end:
            self.tree[node] = self.arr[start]
        else:
            mid = (start + end) // 2
            self.build(2 * node, start, mid)
            self.build(2 * node + 1, mid + 1, end)
            self.tree[node] = self.tree[2 * node] | self.tree[2 * node + 1]
    
    def query(self, node, start, end, left, right, v):
        if start > right or end < left:
            return -1
        
        if self.tree[node] <= v:
            return -1
        
        if start == end:
            if self.arr[start] > v:
                return start
            else:
                return -1
        
        mid = (start + end) // 2
        if start >= left and self.tree[node] > v:
            return self.query(2 * node, start, mid, left, right, v)
        
        left_index = self.query(2 * node, start, mid, left, right, v)
        if left_index != -1:
            return left_index
        return self.query(2 * node + 1, mid + 1, end, left, right, v)


def solve():
    t = int(input())
    for _ in range(t):
        n, q = map(int, input().split())
        a = list(map(int, input().split()))
        seg_tree = SegmentTree(a)
        for _ in range(q):
            v = int(input())
            ans = seg_tree.query(1, 0, n - 1, 0, n - 1, v)
            print(ans + 1 if ans != -1 else -1)


solve()
