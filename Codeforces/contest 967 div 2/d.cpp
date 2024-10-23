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
void solve() {
    ll n;
    cin>>n;
    vl a(n+1),c(n+1);
    vvl t(n+1);
    vector<bool> v(n+1,false);
    vl r;
    iota(a.begin(),a.end(),0);
    a[0]=0;
    FOR(i,1,n+1) {
        cin>>a[i];
        t[a[i]].pb(i);
    }
    vl p(n+1,-1);
    ll pMin=LLONG_MAX;
    FOR(i,1,n+1) p[a[i]]=i;
    FOR(i,1,n+1) {
        if(p[i]!=-1) {
            c[p[i]]++;
            pMin=min(pMin,p[i]);
        }
    }
    ll i=1;
    while(i<=n) {
        if(i==pMin) {
            r.pb(a[i]);
            c[p[a[i]]]--;
            while(pMin<=n && c[pMin]==0) pMin++;
            i++;
        } else {
            if(r.size()%2==0) {
                ll m=0;
                FOR(j,i,min(pMin,n)+1) if(!v[j]) m=max(m,a[j]);
                FOR(j,i,min(pMin,n)+1) if(a[j]==m) {
                    i=j+1;
                    break;
                }
                if(m==0) break;
                r.pb(m);
                c[p[m]]--;
                while(pMin<=n && c[pMin]==0) pMin++;
            } else {
                ll m=LLONG_MAX;
                FOR(j,i,min(pMin,n)+1) if(!v[j]) m=min(m,a[j]);
                FOR(j,i,min(pMin,n)+1) if(a[j]==m) {
                    i=j+1;
                    break;
                }
                if(m==LLONG_MAX) break;
                r.pb(m);
                c[p[m]]--;
                while(pMin<=n && c[pMin]==0) pMin++;
            }
        }
        for(auto idx:t[r.back()]) v[idx]=true;
    }
    ce(r.size());
    coutv(r);
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