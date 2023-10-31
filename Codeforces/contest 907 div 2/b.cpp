#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    vector<int> x1 {x[0]};
    for (int i = 1; i < q; i++) {
        if (x[i] < x1.back()) {
            x1.push_back(x[i]);
        }
    }

    reverse(x1.begin(), x1.end());
    int sz = x1.size();
    vector<i64> pre(sz + 1);
    for (int i = 0; i < sz; i++) {
        pre[i + 1] = pre[i] + (1LL << (x1[i] - 1));
    }

    vector<i64> ans(n);
    for (int i = 0; i < n; i++) {
        int first = __builtin_ctz(a[i]);
        int lo = upper_bound(x1.begin(), x1.end(), first) - x1.begin();
        ans[i] = 1LL * a[i] + pre[lo];
        cout << ans[i] << " \n"[i == n - 1];
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =  1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

