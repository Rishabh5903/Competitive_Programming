#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ce(x) cout << (x) << endl

void solve() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vl a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll ans = 0;
        for (ll i = 0; i < n; ++i) {
            ll sum = 0;
            for (ll j = i; j < n; ++j) {
                sum += a[j];
                if (sum > x) break;
                if (sum <= x) ans++;
            }
        }
        ce(ans);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
