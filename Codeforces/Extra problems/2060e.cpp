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
void dfs(ll i,vl& comp,ll cnt,vvl& g2){
    if(comp[i])return;
    comp[i]=cnt;
    for(ll j:g2[i]){
        dfs(j,comp,cnt,g2);
    }
}
void dfs2(ll i,vl& comp,ll cnt,vvl& g1){
    // if(comp[i]==-1)return true;
    if(comp[i]!=cnt)return;
    comp[i]=-1;
    // bool ans=true;
    for(ll j:g1[i]){
        dfs2(j,comp,cnt,g1);
    }
    // return ans;

}
void solve() {
ll n,m1,m2;
cin>>n>>m1>>m2;
vvl g1(n),g2(n);
for(ll i=0;i< m1;i++){ll u,v;cin>>u>>v;u--;v--;
g1[u].pb(v);g1[v].pb(u);
}
for(ll i=0;i< m2;i++){ll u,v;cin>>u>>v;u--;v--;
g2[u].pb(v);g2[v].pb(u);
}
ll ans=0;
ll cnt=1;
vl comp(n,0);
vl extra(n+1,0);
FOR(i,0,n){
    if(!comp[i]){dfs(i,comp,cnt,g2);cnt++;}
}
// ce("dbg1");
// cout<<comp<<" "<<cnt<<endl;
// ans+=cnt-2;
ll temp=0;
FOR(i,0,n){
    for(ll j:g1[i])if(comp[j]!=comp[i])temp++;
}
ans+=temp/2;
FOR(i,0,n){
    if(comp[i]!=-1){
        extra[comp[i]]++;dfs2(i,comp,comp[i],g1);
    }
}
// cout<<comp<<extra<<endl;
// ce("dbg2");
for(ll i:extra)ans+=max(0LL,i-1);
ce(ans);
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