#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (long long i = a; i < b; i++)
#define sz(x) static_cast<long long>((x).size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#endif

#define int long long
#define double long double
const long long inf = (long long) 1e18;
const int mod = (int) 998244353;

struct SegTree {

    vector<int> tree, arr;
    int n, sz;
    int NeutralElement = 0;  // This will help when GCD is queried and should return 0 if no range overlap

    // Function to merge two nodes of the segment tree (in this case, GCD)
    int merge(int a, int b) {
        return gcd(a, b);
    }

    // Function to initialize the segment tree with the difference array and size
    void init(vector<int> a, int N) {
        n = N;
        sz = 1;
        while(sz < n) sz *= 2;  // Ensure tree size is a power of 2
        arr.resize(n, 0);
        tree.resize(2 * sz, 0LL);
        arr.assign(all(a));
        build(0, 0, sz);
    }

    // Building the segment tree recursively
    void build(int idx, int lx, int rx) {
        if (rx - lx == 1) {
            if (lx < n) tree[idx] = arr[lx];
            return;
        }
        int mid = (lx + rx) / 2;
        build(2 * idx + 1, lx, mid);
        build(2 * idx + 2, mid, rx);
        tree[idx] = merge(tree[2 * idx + 1], tree[2 * idx + 2]);
    }

    // Function to update an element at a given index in the array
    void update(int index, int val) {
        update(index, val, 0, 0, sz);
        arr[index] = val;
    }

    // Update function for segment tree
    void update(int index, int val, int idx, int lx, int rx) {
        if (rx - lx == 1) {
            tree[idx] = val;
            return;
        }
        int mid = (lx + rx) / 2;
        if (index < mid) update(index, val, 2 * idx + 1, lx, mid);
        else update(index, val, 2 * idx + 2, mid, rx);
        tree[idx] = merge(tree[2 * idx + 1], tree[2 * idx + 2]);
    }

    // Function to query the GCD over a range [l, r]
    int query(int l, int r) {
        return query(l, r + 1, 0, 0, sz);  // Query to [l, r] is [l, r+1) in 0-based indexing
    }

    // Recursive function to perform the query
    int query(int l, int r, int idx, int lx, int rx) {
        if (lx >= r || rx <= l) return NeutralElement;  // No overlap
        if (lx >= l && rx <= r) return tree[idx];  // Total overlap
        int mid = (lx + rx) / 2;
        int left = query(l, r, 2 * idx + 1, lx, mid);
        int right = query(l, r, 2 * idx + 2, mid, rx);
        return merge(left, right);  // Merge results from left and right children
    }
};

// Main solution function
void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    // Create the difference array
    vector<int> diff(n);
    diff[0] = a[0];
    rep(i, 1, n) diff[i] = a[i] - a[i-1];

    // Initialize the segment tree with the difference array
    SegTree seg;
    seg.init(diff, n);

    // Process each query
    while (q--) {
        int l, r;
        cin >> l >> r;
        --l; --r;  // Convert to 0-based index

        if (l == r) {
            // If l == r, the GCD is 0 (since it's a single element, no difference)
            cout << 0 << ' ';
        } else {
            // Query the GCD in the range [l+1, r] and handle edge case for GCD of boundaries
            int res = seg.query(l + 1, r);
            res = gcd(res, abs(a[l] - a[r]));  // Handle the boundary case by including the difference between a[l] and a[r]
            cout << abs(res) << ' ';
        }
    }
    cout << '\n';  // Newline after processing all queries
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(10);

    int t = 1;  // Number of test cases
    cin >> t;
    while (t--) solve();
}
