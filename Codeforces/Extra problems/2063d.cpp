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
ll n,m;
cin>>n>>m;
vl a(n),b(m);
for(ll i=0;i< n;i++){
cin>>a[i];
}FOR(i,0,m)cin>>b[i];sort(all(a));sort(all(b));
ll k=min(n,min(m,(n+m)/3));
// ll k=min(n/3,m/3)*2;ll temp=min(n/3,m/3);
// ll n1=n-3*temp,m1=m-3*temp;if(n1<m1)swap(n1,m1);
// if(n1>=4 && m1==2)k+=2;else if(n1>=2 && m1>=1)k++;
if(!k){ce(0);return;}
// cout<<"dbg1"<<k<<endl;
vl ans(k);
vl apsum={0},bpsum={0};
FOR(i,0,n/2){
    apsum.pb(apsum.back()+a[n-i-1]-a[i]);
}
FOR(i,0,m/2){
    bpsum.pb(bpsum.back()+b[m-i-1]-b[i]);
}
// ce("dbg2");
ll k1=0;ll curr=0;
FOR(i,0,k+1){
    if((i<apsum.size()) && ((k-i)<bpsum.size()) && ((2*i+k-i<=n) && (2*(k-i)+i<=m))){if(apsum[i]+bpsum[k-i]>=curr){curr=apsum[i]+bpsum[k-i];k1=i;}}
}
ll k2=k-k1;
ans[k-1]=curr;
// ce("dbg");
if(k>=2)
for(int i=k-2;i>=0;i--){
    curr=0;
    if(k1>=1)curr=apsum[k1-1]+bpsum[k2];
    if(k2>=1)curr=max(curr,apsum[k1]+bpsum[k2-1]);
    if((k1>=2) && (k2+1<bpsum.size()))curr=max(curr,apsum[k1-2]+bpsum[k2+1]);
    if((k2>=2) && (k1+1<apsum.size()))curr=max(curr,apsum[k1+1]+bpsum[k2-2]);
    if(curr==apsum[k1-1]+bpsum[k2]){k1--;}
    else if(curr==apsum[k1]+bpsum[k2-1]){k2--;}
    else if(curr==apsum[k1-2]+bpsum[k2+1]){k2++;k1-=2;}
    else if(curr==apsum[k1+1]+bpsum[k2-2]){k2-=2;k1++;}
    ans[i]=curr;
}
ce(ans.size());coutv(ans);
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