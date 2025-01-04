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
void coutv(vl v){
    ll sz=v.size();
    FOR(i,0,sz)cout<<v[i]<<" ";cout<<endl;
}
void solve() {
ll n,m,q;
cin>>n>>m>>q;
ll l[q];
ll l1=n+1,r1=n+1,l2=m,r2=m,l3=0,r3=0;
ll f=1;
for(ll i=0;i< q;i++){
cin>>l[i];ll f1=1,f2=1;
if(f && l[i]<=r2 && l[i]>=l2){
    if(i==0){f=0;l2=n+1;r2=0;}
    if(l1==n+1){l1=1;r1=1;f1=0;}
    else if(l[i]>r1) {r1=min(r1+1,l2);f1=0;}
    // else f1=0;
    if(r3==0){r3=n;l3=n;f2=0;}
    else if(l[i]<l3){l3=max(l3-1,r2);f2=0;}
    // else f2=0;

}
else if(f && l[i]<l2){if(r1==n+1)l2=max(1LL,l2-1);else l2=max(l2-1,r1);}
else if(f && l[i]>r2){if(r3==0)r2=min(n,r2+1);else r2=min(r2+1,l3);}
if(f2 && l[i]<l3)l3=max(l3-1,max(r2,r1)+1);
if(f1 && l[i]>r1) r1=min(r1+1,min(l3,l2)-1);
// coutv({l1,r1,l2,r2,l3,r3});
cout<<((r1-l1+1)*(l1!=n+1)+(r2-l2+1)*f+(r3-l3+1)*(r3!=0)-(r1==l2)*f-(r2==l3)*f)<<" ";
}
cout<<endl;
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