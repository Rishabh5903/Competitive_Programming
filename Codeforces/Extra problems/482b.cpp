#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int t[4 * MAXN];
bool filled[4 * MAXN];
int a[MAXN];

void build(int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = (1 << 30) - 1; // Initialize with all bits set.
        filled[v] = false;
    } else {
        int tm = (tl + tr) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        t[v] = t[v * 2] & t[v * 2 + 1];
        filled[v] = false;
    }
}

bool query(int v, int tl, int tr, int l, int r, int q) {
    if (l > r) 
        return true;

    if (l == tl && r == tr) {
        if ((t[v] & q) != q) 
            return false;

        if (filled[v]) 
            return true;

        if (t[v] == q) {
            t[v] = q;
            filled[v] = true;
            return true;
        }
    }

    int tm = (tl + tr) / 2;
    bool left = query(v * 2, tl, tm, l, min(r, tm), q);
    bool right = query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, q);

    t[v] = t[v * 2] & t[v * 2 + 1];
    filled[v] = filled[v * 2] & filled[v * 2 + 1];

    return left && right;
}

void propagate(int v, int tl, int tr) {
    if (filled[v]) {
        if (tl == tr) {
            a[tl] = t[v];
        } else {
            int tm = (tl + tr) / 2;
            t[v * 2] &= t[v];
            t[v * 2 + 1] &= t[v];
            filled[v * 2] = filled[v * 2 + 1] = true;
            propagate(v * 2, tl, tm);
            propagate(v * 2 + 1, tm + 1, tr);
        }
    }
}

bool validate(int n, vector<tuple<int, int, int>> &constraints) {
    for (auto &[l, r, q] : constraints) {
        int res = a[l - 1];
        for (int i = l; i < r; ++i) 
            res &= a[i];
        if (res != q) 
            return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    build(1, 0, n - 1);
    vector<tuple<int, int, int>> constraints;

    for (int i = 0; i < m; ++i) {
        int l, r, q;
        cin >> l >> r >> q;
        --l; --r;
        constraints.emplace_back(l, r, q);
        if (!query(1, 0, n - 1, l, r, q)) {
            cout << "NO\n";
            return 0;
        }
    }

    propagate(1, 0, n - 1);

    if (validate(n, constraints)) {
        cout << "YES\n";
        for (int i = 0; i < n; ++i) 
            cout << a[i] << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
