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
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for( long long int i = a; i<b;i++)
#define pb push_back
int modmul(int a,int b,int m){ a %= m;b %= m; return (a * b) % m;}
int modadd(int a,int b,int m){ a %= m;b %= m; return (a + b) % m;}
int modsub(int a,int b,int m){ a %= m;b %= m; return (a - b + m) % m;}
int gcd(int a, int b){ if(b == 0) return a; return gcd(b, a % b);}
int expo(int a,int n,int md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
// vb sieve(int n){vb prime(n+1,1); prime[0] = prime[1] = 0; for(int i=2;i*i<=n;i++){if(prime[i]){for(int j=i*i;j<=n;j+=i) prime[j]=0;}} return prime;}
// vs rmspace(string s){ vs toreturn; string tmp = 
// ; for(auto i : s){ if(i == ' '){ toreturn.pb(tmp); tmp = 
// ;} else tmp += i;} toreturn.pb(tmp); return 
// toreturn;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
ll maxm(ll n,vector<ll> v){
sort(all(v));
return v[n-1];
}
ll minm(ll n,vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
ll n,a,b;
cin>>n>>a>>b;
vector<ll> l(n);
for(ll i=0;i< n;i++){
cin>>l[i];
}
vector<ll> v=l;
for (ll i = n-2; i >=0; i--)
{
    l[i]=l[i+1]+l[i];
}
// cout<<l[0]<<endl;
ll ind=-1;ll ans=0;
FOR(i,-1,n-2){
    if(ind==-1){
    if((l[i+1])*b>(v[i+1])*(a+b)+(l[i+2]-(n-i-2)*v[ind+1])*b) {ans+=(v[i+1])*(a+b);ind=i+1;}
    else{ans+=(v[i+1])*b;}
    continue;
    }
    if((l[i+1]-(n-i-1)*v[ind])*b>(v[i+1]-v[ind])*(a+b)+(l[i+2]-(n-i-2)*v[ind+1])*b) {ans+=(v[i+1]-v[ind])*(a+b);ind=i+1;}
    else{ans+=(v[i+1]-v[ind])*b;}
    // cout<<i<<" "<<ind<<" "<<ans<<endl;
}
if(ind>=0)
ans+=(v[n-1]-v[ind])*b;
else ans+=(v[n-1])*b;
cout<<ans<<endl;
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