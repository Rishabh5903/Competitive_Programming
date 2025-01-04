#include <bits/stdc++.h>
#include<sstream> 
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
ll modmul(ll a,ll b,ll m){ a %= m;b %= m; return (a * b) % m;}
ll modadd(ll a,ll b,ll m){ a %= m;b %= m; return (a + b) % m;}
ll modsub(ll a,ll b,ll m){ a %= m;b %= m; return (a - b + m) % m;}
ll gcd(ll a, ll b){ if(b == 0) return a; return gcd(b, a % b);}
ll expo(ll a,ll n,ll md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
ll expo(ll a,ll n){ ll res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
ll modinv(ll b, ll m) {
return expo(b, m - 2, m);
}
ll moddiv(ll a, ll b, ll m) {
a %= m; b %= m;
ll inv = modinv(b, m); 
 return modmul(a, inv, m);
}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-20;
ll maxm(vector<ll> v){
sort(all(v));
return v[v.size()-1];
}
ll minm(vector<ll> v){
sort(all(v));
return v[0];
}
void coutv(vl v){
ll sz=v.size();
FOR(i,0,sz)cout<<v[i]<<' ';cout<<endl;
}
void couta(ll a[],ll n){
FOR(i,0,n)cout<<a[i]<<' ';cout<<endl;
}
vl primeFactorization(ll n){
vl factors;
while (n % 2 == 0)
{
factors.pb(2);
n = n/2;
}
for (int i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
factors.pb(i);
n = n/i;
}
}
if (n > 2) factors.pb(n);
return factors;
}
void find(ll n, ll arr[], ll result[]) {
    set<pair<ll, ll>> st;
    for (ll i = n - 1; i >= 0; i--) {
        auto it = st.lower_bound({arr[i], 0});
        if (it != st.begin()) {
            --it;
            result[i] = it->second;
        } else {
            result[i] = n+1;
        }
        st.insert({arr[i], i});
    }
}
void solve() {
ll n;
cin>>n;
ll q[n],k[n],j[n];
FOR(i,0,n){cin>>q[i];}FOR(i,0,n){cin>>k[i];}FOR(i,0,n){cin>>j[i];}
    ll qq[n], kk[n], jj[n];
    FOR(i, 0, n) qq[i] = kk[i] = jj[i] = n+1;
    find(n, q, qq);
    find(n, k, kk);
    find(n, j, jj);
ll i=0;vector<pair<char,ll>> ans;ll ind1,ind2,ind3,next;
// couta(qq,n);couta(kk,n);couta(jj,n);
while(i<n-1){
ind1=qq[i];ind2=kk[i];ind3=jj[i];next=min(ind1,min(ind2,ind3));
// coutv({i,ind1,ind2,ind3,next});
if(next==(n+1)){ans.clear();break;}
else{
    if(next==ind1)ans.pb({'q',next+1});
    else if(next==ind2)ans.pb({'k',next+1});
    else ans.pb({'j',next+1});
    i=next;
}

}
if(!ans.size())ce("NO");
else{
    ce("YES");
    ce(ans.size());
    for(auto i:ans)cout<<i.first<<" "<<i.second<<endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve();
}
}