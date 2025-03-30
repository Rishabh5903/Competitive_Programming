#include <bits/stdc++.h>
#include <sstream>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p){ return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T, typename = typename enable_if<!is_same<T, string>::value, typename T::value_type>::type>
ostream& operator<<(ostream &os, const T &v){ os << '{'; string s; for(const auto &x : v) os << s << x, s = ", "; return os << '}'; }
void dbg_out(){ cerr << endl; }
template<typename H, typename... T> void dbg_out(H h, T... t){ cerr << " " << h; dbg_out(t...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
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
#define all(x) (x).begin(), (x).end()
#define FOR(i,a,b) for(ll i = a; i < b; i++)
#define pb push_back
#define ce(x) cout << x << "\n"
#define cinv(v) for(ll i = 0; i < (ll)v.size(); i++) cin >> v[i];
ll modmul(ll a, ll b, ll m){ a %= m; b %= m; return (a * b) % m; }
ll modadd(ll a, ll b, ll m){ a %= m; b %= m; return (a + b) % m; }
ll modsub(ll a, ll b, ll m){ a %= m; b %= m; return (a - b + m) % m; }
ll gcd(ll a, ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll expo(ll a, ll n, ll md){ ll res = 1; while(n){ if(n & 1){ res = modmul(res, a, md); n--; } else { a = modmul(a, a, md); n >>= 1; } } return res; }
ll expo(ll a, ll n){ ll res = 1; while(n){ if(n & 1){ res *= a; n--; } else { a *= a; n >>= 1; } } return res; }
ll modinv(ll b, ll m){ return expo(b, m - 2, m); }
ll moddiv(ll a, ll b, ll m){ a %= m; b %= m; ll inv = modinv(b, m); return modmul(a, inv, m); }
template <typename T> bool revsort(T a, T b){ return a > b; }
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-20;
ll maxm(vector<ll> v){ sort(all(v)); return v.back(); }
ll minm(vector<ll> v){ sort(all(v)); return v.front(); }
void coutv(vl v){ FOR(i,0,v.size()) cout << v[i] << " "; cout << "\n"; }
void couta(ll a[], ll n){ FOR(i,0,n) cout << a[i] << " "; cout << "\n"; }
vl primeFactorization(ll n){
    vl f; 
    while(n % 2 == 0){ f.pb(2); n /= 2; }
    for(int i = 3; i <= sqrt(n); i += 2) while(n % i == 0){ f.pb(i); n /= i; }
    if(n > 2) f.pb(n);
    return f;
}
void solve(){
    ll n, m;
    cin>>n>>m;
    vl xs(n), rs(n);
    FOR(i,0,n) cin>>xs[i];
    FOR(i,0,n) cin>>rs[i];
    ll mx=0;
    FOR(i,0,n) mx=max(mx,rs[i]);
    vector<vector<pair<ll,ll>>> ev(mx+1);
    FOR(i,0,n){
        FOR(j,0, rs[i]+1){
            ll rem = rs[i]*rs[i] - j*j;
            ll d = floor(sqrt((ld)rem));
            ev[j].pb({xs[i]-d, xs[i]+d});
        }
    }
    ll ans = 0;
    FOR(j,0, mx+1){
        if(ev[j].empty()) continue;
        sort(all(ev[j]));
        ll tot = 0, L = ev[j][0].first, R = ev[j][0].second;
        for(auto &p : ev[j]){
            if(p.first <= R+1) R = max(R, p.second);
            else { tot += (R - L + 1); L = p.first; R = p.second; }
        }
        tot += (R - L + 1);
        ans += (j==0 ? tot : tot*2);
    }
    ce(ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    FOR(i,1,t+1) { solve(); }
    return 0;
}
