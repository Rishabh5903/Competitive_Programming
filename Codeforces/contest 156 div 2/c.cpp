#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    string s;
    cin >> s;
    i64 pos;
    cin >> pos;

    int n = s.size();

    pos--;
    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        i64 val = 1LL * (2 * n - mid) * (mid + 1) / 2;
        if (pos < val) {
            hi = mid; 
        } else {
            lo = mid + 1;
        }
    }
    int ind = lo;

    pos -= 1LL * (2 * n - ind + 1) * ind / 2;

    string t;
    int cnt = ind;
    for (int i = 0; i < n; i++) {
        if (cnt) {
            if (i == n - 1) {
                while (cnt && !t.empty() && s[i] < t.back()) {
                    t.pop_back();
                    cnt--;
                }
                t += s[i];
                while (cnt) {
                    t.pop_back();
                    cnt--;
                }
            } else {
                while (cnt && !t.empty() && s[i] < t.back()) {
                    t.pop_back();
                    cnt--;
                } 
                t += s[i];
            }
        } else {
            t += s[i];
        }
    }
    cout << t[pos];
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