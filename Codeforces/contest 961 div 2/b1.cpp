#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        ll max_petals = 0, curr_cost = 0, left = 0;
        
        for (ll right = 0; right < n; right++) {
            curr_cost += v[right];
            while (v[right] - v[left] > 1 || curr_cost > m) {
                curr_cost -= v[left];
                left++;
            }
            max_petals = max(max_petals, curr_cost);
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
