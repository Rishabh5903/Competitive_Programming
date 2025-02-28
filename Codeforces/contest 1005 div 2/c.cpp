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
void solve() {
ll N;
cin>>N;
ll l[N];
vl v;
for(ll i=0;i< N;i++){
cin>>l[i];
}
ll temp=l[0];
FOR(i,1,N){
    if(((temp>0) && (l[i]<0)) ||((temp<0) && (l[i]>0))){
        v.pb(temp);temp=l[i];
    }else temp+=l[i];
    // coutv({temp,l[i]});
}v.pb(temp);
// ce(v);
ll n=v.size();
ll pre[n]={0},suff[n]={0};if(v[0]>0)pre[0]=v[0];
FOR(i,1,v.size()){
    pre[i]=pre[i-1];
    if(v[i]>0)pre[i]+=v[i];
}
if(v[n-1]<0)suff[n-1]=abs(v[n-1]);
for(int i=n-2;i>=0;i--){
    suff[i]=suff[i+1];
    if(v[i]<0)suff[i]+=abs(v[i]);
}
ll ans=0;ans=suff[0];
FOR(i,0,n){
    if(v[i]>0)ans=max(ans,pre[i]+(i<n-1 ? suff[i+1] : 0LL));
}
// ce(v);couta(pre,n);couta(suff,n);
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