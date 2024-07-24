#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canAchieveK(ll k, ll a, ll n1, ll n2, ll m) {
    if (k % a <= n2) {
        ll n2_used = k % a;
        ll n1_used = (k - n2_used) / a - n2_used;
        return n1_used >= 0 && n1_used <= n1 && a * (n1_used + n2) + n2_used <= m;
    }
    return false;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<pair<ll, ll>> flowers(n); // (petals, quantity)

        for (ll i = 0; i < n; i++) {
            cin >> flowers[i].first;
        }

        for (ll i = 0; i < n; i++) {
            cin >> flowers[i].second;
        }

        // Sort flowers based on petals
        sort(flowers.begin(), flowers.end());

        ll max_petals = 0;

        for (ll i = 0; i < n; i++) {
            ll a = flowers[i].first;
            ll n1 = flowers[i].second;
            ll n2 = 0;
            if (i + 1 < n && flowers[i + 1].first == a + 1) {
                n2 = flowers[i + 1].second;
            }

            // Binary search for maximum k
            ll low = 0, high = m, best_k = 0;
            while (low <= high) {
                ll mid = low + (high - low) / 2;
                if (canAchieveK(mid, a, n1, n2, m)) {
                    best_k = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            max_petals = max(max_petals, best_k);
        }

        cout << max_petals << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
