#include <iostream>
#include <vector>
#include<bits/stdc++.h>
class SegmentTree {
private:
    int size;
    std::vector<int> tree;
    std::vector<int> lazy;

public:
    SegmentTree(int n) {
        size = 1;
        while (size < n) {
            size *= 2;
        }
        tree.assign(2 * size + 2, 0);
        lazy.assign(2 * size + 2, 0);
    }

    void update(int node, int start, int end, int left, int right, int value) {
        if (left > end || right < start) {
            return;
        }
        if (left <= start && right >= end) {
            lazy[node] += value;
            tree[node] += value;
        } else {
            int mid = (start + end) / 2;
            update(2 * node, start, mid, left, right, value);
            update(2 * node + 1, mid + 1, end, left, right, value);
            tree[node] = std::max(tree[2 * node], tree[2 * node + 1]) + lazy[node];
        }
    }

    int query() {
        return tree[1];
    }
};

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        std::cin >> n >> m;
        std::vector<std::pair<int, int>> segments;

        for (int j = 0; j < n; j++) {
            int l, r;
            std::cin >> l >> r;
            segments.push_back(std::make_pair(l, r));
        }

        std::sort(segments.begin(), segments.end());

        std::vector<int> a(m + 2, 0);
        SegmentTree segment_tree(m + 2);
        int max_cost = 0;

        for (auto segment : segments) {
            int l = segment.first;
            int r = segment.second;
            segment_tree.update(1, 1, m, l, r, 1);
            max_cost = std::max(max_cost, segment_tree.query());
        }

        std::cout << max_cost << std::endl;
    }

    return 0;
}
