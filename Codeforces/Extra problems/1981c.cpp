#include <bits/stdc++.h>
using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ', ' << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ', '; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for( long long int i = a; i<b;i++)
#define pb push_back
#define ce(x) cout<<x<<endl
#define cinv(v) for( long long int i = 0; i<v.size();i++)cin>>v[i];
#define coutv(v) for( long long int i = 0; i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

int cnt(int x) {
    int tot = 0;
    while (x) {
        tot++;
        x >>= 1;
    }
    return tot;
}

void solve() {
    ll n;
    cin >> n;
    vl l(n);
    vector<pair<ll, ll>> v;
    
    for (ll i = 0; i < n; i++) {
        cin >> l[i];
        if (l[i] != -1) v.pb({l[i], i});
    }
    
    if (v.empty()) {
        FOR(i, 0, n) {
            l[i] = (i % 2) ? 2 : 1;
        }
        coutv(l);
        return;
    }
    
    bool valid = true;
    
    // Handle the first segment
    ll temp = v[0].second - 1;
    while (temp >= 0) {
        if ((v[0].second - temp) % 2) l[temp] = 2 * v[0].first;
        else l[temp] = v[0].first;
        temp--;
    }

    // Handle the segments between known values
    for (size_t i = 1; i < v.size(); i++) {
        ll left = v[i - 1].second + 1, right = v[i].second - 1;
        while (left <= right) {
            if (l[left - 1] == 1) l[left] = 2;
            else l[left] = l[left - 1] >> 1;
            
            if (l[right + 1] == 1) l[right] = 2;
            else l[right] = l[right + 1] >> 1;
            
            left++;
            right--;
        }
    }

    // Handle the last segment
    FOR(i, v.back().second + 1, n) {
        if ((i - v.back().second) % 2) l[i] = l[v.back().second] * 2;
        else l[i] = l[v.back().second];
    }

    // Verify the result
    for (ll i = 0; i < n - 1; i++) {
        if (l[i] != l[i + 1] / 2 && l[i + 1] != l[i] / 2) {
            valid = false;
            break;
        }
    }

    if (!valid) ce(-1);
    else coutv(l);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
