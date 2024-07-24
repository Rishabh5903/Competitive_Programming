#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

            // Use as many flowers of type `a` as possible
            ll max_n1 = min(n1, m / a);
            ll current_petals = max_n1 * a;
            ll remaining_budget = m - max_n1 * a;

            // Check if there's an adjacent flower type `a+1`
            if (i + 1 < n && flowers[i + 1].first == a + 1) {
                ll n2 = flowers[i + 1].second;
                ll max_n2 = min(n2, remaining_budget / (a + 1));
                current_petals += max_n2 * (a + 1);
                remaining_budget -= max_n2 * (a + 1);
            }

            max_petals = max(max_petals, current_petals);
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
