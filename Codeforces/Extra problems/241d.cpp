#include <bits/stdc++.h> // бесполезный комментарий code by pabL0

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fasttype ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
#define pb push_back
#define pf push_front
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define ff first
#define ss second
#define loop(a) for (ll __ = 0; __ < (a); ++__)
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using def = void;

using namespace __gnu_pbds;
using namespace std;

template<typename T, typename T2 = null_type>struct ordered_set : public tree<T, T2, less<T>, rb_tree_tag, tree_order_statistics_node_update> {};

const string NO = "NO\n";
const string YES = "YES\n";
const ll inf = 1e15;
const ll MOD = 1000000007;
const ll MOD2 = 998244353;
const pair<ll, ll> NULLPAIR = {0ll, 0ll};
const long double EPS = 1e-7;
const long double PI = 3.14159265358979;

// #pragma GCC optimize("arch=sandybridge")
// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("tx,tx2,fma")
// #pragma GCC optimize("O3")

template <typename X, typename Y>
istream &operator>>(istream &in, pair<X, Y> &a) {
    in >> a.first >> a.second;
    return in;
}

template <typename X, typename Y>
ostream &operator<<(ostream &out, pair<X, Y> &a) {
    out << a.first << ' ' << a.second << '\n';
    return out;
}

template <typename T>
istream &operator>>(istream &in, vector<T> &a) {
    for (auto &x : a) in >> x;
    return in;
}

template <typename T>
ostream &operator<<(ostream &out, vector<T> &a) {
    for (auto &x : a) out << x << ' ';
    return out;
}

random_device rd;
ll gen() {
    return uniform_int_distribution<ll>(0, 100000000)(rd);
}

void Solve() {
    string s, a;
    ll k;
    cin >> s >> a >> k;
    vector<ll> ans;
    for (ll i = 0; i < s.size(); ++i) {
        ll cnt = 0;
        ll h = 0;
        for (ll j = i; j < s.size(); ++j) {
            if (a[s[j] - 'a'] == '0') cnt++;
            if (cnt > k) break;
            h = h * 67 + s[j];
            ans.pb(h);
        }
    }
    sort(all(ans));
    cout << unique(all(ans)) - ans.begin() << '\n';
    return; 
}

signed main() {
    fasttype;
    // freopen("in.txt", "r", stdin);
    ll t = 1;
    // cin >> t;
    while (t--) Solve();
    return 0;
}