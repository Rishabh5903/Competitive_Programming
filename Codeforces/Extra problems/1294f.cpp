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
vvl adj;vl par;
pair<ll,ll> dfs(ll u,ll p=-1,ll temp=0){
par[u] = p;
pair<ll,ll> x={temp,u};
for(auto i:adj[u]){
    if(i==p)continue;
    x=max(x,dfs(i,u,temp+1));
}
return x;
}

void solve() {
ll n;
cin>>n;
adj=vvl(n);par=vl(n);
for(ll i=0;i< n-1;i++){ll a,b;
cin>>a>>b;a--;b--;
adj[a].pb(b);
adj[b].pb(a);
}
auto x=dfs(0);
auto y=dfs(x.second);

vl diam;
ll z=y.second;
while(z!=x.second){
    diam.pb(z);
    z=par[z];
}diam.pb(x.second);
if(diam.size()==n){
    ce(n-1);
    cout<<diam[0]+1<<" "<<diam[1]+1<< " "<<diam.back()+1<<endl;
    return;
}
queue<ll> q;vl dist(n,-1);
for(auto i:diam){q.push(i);dist[i]=0;}


while(!q.empty()){
    ll temp=q.front();q.pop();
    for(auto i:adj[temp]){
        if(dist[i]==-1){dist[i]=dist[temp]+1;q.push(i);}
    }
}

pair<ll,ll> maxo={dist[0],0};
FOR(i,0,n)maxo=max(maxo,{dist[i],i});
ce(diam.size()-1+maxo.first);
cout<<diam[0]+1<<" "<<diam.back()+1<<" "<<maxo.second+1<<endl;
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