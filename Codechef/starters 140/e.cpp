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
#define coutv(v) for( long long int i = 0; i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
int modmul(int a,int b,int m){ a %= m;b %= m; return (a * b) % m;}
int modadd(int a,int b,int m){ a %= m;b %= m; return (a + b) % m;}
int modsub(int a,int b,int m){ a %= m;b %= m; return (a - b + m) % m;}
int gcd(int a, int b){ if(b == 0) return a; return gcd(b, a % b);}
int expo(int a,int n,int md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
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

const int MOD = 1e9 + 7;  
const int P = 31;         

vector<long long> computePrefixHashes(const string &s) {
    int n = s.length();
    vector<long long> prefixHashes(n + 1, 0);
    vector<long long> pPower(n + 1, 1);

    for (int i = 1; i <= n; ++i) {
        pPower[i] = (pPower[i-1] * P) % MOD;
    }

    for (int i = 0; i < n; ++i) {
        prefixHashes[i + 1] = (prefixHashes[i] + (s[i] - 'a' + 1) * pPower[i]) % MOD;
    }

    return prefixHashes;
}
long long f(const vector<long long> &prefixHashes, const vector<long long> &pPower, int l, int r) {
    long long hashValue = (prefixHashes[r + 1] - prefixHashes[l] + MOD) % MOD;
    hashValue = (hashValue * pPower[pPower.size() - 1 - l]) % MOD;
    return hashValue;
}
void solve() {
// ll n;
// cin>>n;
string s;
cin>>s;ll n=s.size();if(n%2){ce(0);return;}
    vector<long long> prefixHashes = computePrefixHashes(s);
    vector<long long> pPower(n + 1, 1);
    for (int i = 1; i <= n; ++i) {
        pPower[i] = (pPower[i-1] * P) % MOD;
    }
    ll ans=0;
    FOR(i,0,(n-2)/2){
        ll a,b,c,d;
        a=f(prefixHashes,pPower,0,i);
        b=f(prefixHashes,pPower,i+1,2*i+1);
        c=f(prefixHashes,pPower,2*i+2,2*i+1+(n-2*(i+1))/2);
        d=f(prefixHashes,pPower,2*i+2+(n-2*(i+1))/2,n-1);
        if(a==b && c==d){ans++;
        // cout<<i<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }

    }
    if(f(prefixHashes,pPower,0,n/2-1)==f(prefixHashes,pPower,n/2,n-1))ans+=2;
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