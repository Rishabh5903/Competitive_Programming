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
vl primes;
vector<ll> generate_primes(ll limit = 100000) {
    std::vector<bool> sieve(limit + 1, true);
    sieve[0] = sieve[1] = false;
    
    for (ll start = 2; start * start <= limit; ++start) {
        if (sieve[start]) {
            for (ll multiple = start * start; multiple <= limit; multiple += start) {
                sieve[multiple] = false;
            }
        }
    }
    
    std::vector<ll> primes;
    for (ll num = 2; num <= limit; ++num) {
        if (sieve[num]) {
            primes.push_back(num);
        }
    }
    return primes;
}
void solve() {
ll n;
cin>>n;
vl ans={2,1};ll sum=3,ind=0;
set<ll> s;ll maxo=3;unordered_map<ll,ll> used;used[1]=1;used[2]=1;
while(ans.size()<n){
    while(used[maxo])maxo++;
    s.insert(maxo);ll mino=*s.begin();
    ll num=(sum+mino+ans.size())/(ans.size()+1);
    if(num>primes[ind])ind++;
    if( num== primes[ind]){
        ans.pb(mino);
        // maxo=max(maxo,ans.back()+1);
        s.erase(mino);used[mino]=1;
    }
    // else if(num>primes[ind])ind++;
    else{
        ll val=(primes[ind]-1)*(sza(ans)+1)-sum+1;
        while(used[val] && val<=n)val=((primes[++ind]-1)*(sza(ans)+1)-sum+1);
        if(val<=n){
            ans.pb(val);used[val]=1;
            FOR(i,maxo,val)s.insert(i);
            // maxo=val+1;
        }
        else {ans.pb(*s.begin());s.erase(*s.begin());}
    }
    sum+=ans.back();
    if(s.find(ans.back())!=s.end())s.erase(ans.back());
    maxo=max(maxo,ans.back()+1);

}
coutv(ans);
// sort(all(ans));
// cout<<ans.size()<<ans<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
primes=generate_primes();
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve();
}
}