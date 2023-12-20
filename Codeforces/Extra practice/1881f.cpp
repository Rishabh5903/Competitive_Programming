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
int modmul(int a,int b,int m){ a %= m;b %= m; return (a * b) % m;}
int modadd(int a,int b,int m){ a %= m;b %= m; return (a + b) % m;}
int modsub(int a,int b,int m){ a %= m;b %= m; return (a - b + m) % m;}
int gcd(int a, int b){ if(b == 0) return a; return gcd(b, a % b);}
int expo(int a,int n,int md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
ll maxm(vector<ll> v){
sort(all(v));
return v[v.size()-1];
}
ll minm(vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
ll n,k;
cin>>n>>k;
ll l[k];
for(ll i=0;i< k;i++){
cin>>l[i];
}
vvl adj(n+1,vl(0));
FOR(i,1,n){ll u,v;
    cin>>u>>v;adj[u].pb(v);adj[v].pb(u);
}
vl dist(n+1,200001);dist[l[0]]=0;
priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
pq.push({0,l[0]});
ll vis[n+1]={0};vis[l[0]]=1;
while(!pq.empty()){
    pair<ll,ll> temp=pq.top();pq.pop();vis[temp.second]=1;
    for(ll i:adj[temp.second]){
        if(!vis[i])
        {dist[i]=minm({dist[i],temp.first+1});
        pq.push({dist[i],i});
        }
    }
}
ll ans=200001;
// cout<<dist<<endl;
if(k==1){
ans=0;
}
else{
    ll ind=1,node=-1,maxo=0;
    FOR(i,1,n+1){
        if(ind==k)break;
        if(i==l[ind]){maxo=maxm({maxo,dist[i]});if(maxo==dist[i])node=i;ind++;}
    }
vl d2(n+1,200001);d2[node]=0;
priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq2;
pq2.push({0,node});
ll vis2[n+1]={0};vis2[node]=1;
while(!pq2.empty()){
    pair<ll,ll> temp=pq2.top();pq2.pop();vis2[temp.second]=1;
    for(ll i:adj[temp.second]){
        if(!vis2[i])
        {d2[i]=minm({d2[i],temp.first+1});
        pq2.push({d2[i],i});
        }
    }
}
// cout<<d2<<endl;
ind=0;maxo=0;
    FOR(i,1,n+1){
        if(ind==k)break;
        if(i==l[ind] ){if(i!=node)maxo=maxm({maxo,d2[i]});ind++;}
    }
    ans=maxo/2+maxo%2;
}
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