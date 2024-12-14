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
const int MAXN=100000;
const int val=((1<<30)-1);
int n, t[4*MAXN],filled[4*MAXN]={0};
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] & t[v*2+1];
    }
}
bool query(int a[],int v, int tl, int tr, int l, int r,int q) {
    if (l > r) 
        return true;
    if(l==r){
        // cout<<l<<" "<<r<<" "<<t[v]<<endl;
        if(t[v]==q)return true;
        else if(t[v]==val){t[v]=q;filled[v]=1;return true;}
        else return false;
    }
    if (l == tl && r == tr) {
        if(t[v]==q)return true;
        else if(t[v]&q!=q) return false;
        else if(t[v]==val){
            FOR(i,tl,tr+1)a[i]=q;
            filled[v]=1;
            return true;
        }
    }
    int tm = (tl + tr) / 2;
    // if(filled[v])
    // cout<<tl<<" "<<tr<<" "<<l<<" "<<r<<endl;
    bool ans=query(a,v*2, tl, tm, l, min(r, tm),q)
           & query(a,v*2+1, tm+1, tr, max(l, tm+1), r,q);
    filled[v]&=(filled[2*v] & filled[2*v+1]);
    // ce("dbg3");
    return ans;
}
// void update(int v, int tl, int tr, int pos, int new_val) {
//     if (tl == tr) {
//         t[v] = new_val;
//     } else {
//         int tm = (tl + tr) / 2;
//         if (pos <= tm)
//             update(v*2, tl, tm, pos, new_val);
//         else
//             update(v*2+1, tm+1, tr, pos, new_val);
//         t[v] = t[v*2] + t[v*2+1];
//     }
// }
void solve() {
int n,m;
cin>>n>>m;
int a[n];FOR(i,0,n)a[i]=val;
// ce(a[1]);
build(a,1,0,n-1);
bool ans=1;
// ce("dbg");
for(ll i=0;i< m;i++){int l,r,q;
cin>>l>>r>>q;
ans&=query(a,1,0,n-1,l-1,r-1,q);
}
// ce("dbg");
if(!ans)ce("NO");
else{
    ce("YES");
    FOR(i,0,n)cout<<a[i]<<" ";
    cout<<endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
// cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve();
}
}