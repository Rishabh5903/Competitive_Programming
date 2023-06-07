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
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;

void dfs(ll u,map<pair<ll,ll>,ll>& mp,
vector<ll>& dp,
vector<ll>& id,
vector<vector<ll>>& adj,
ll& ans){
    
        for (ll v:adj[u])
        { 
            // cout<<v<<endl;
        if(dp[v]==-1 || id[v]==-1 ){
            if(mp[{u,v}]>=id[u]){
                dp[v]=dp[u];
                id[v]=mp[{u,v}];
            }
            else{
                // cout<<"debug"<<endl;
                dp[v]=dp[u]+1;
                id[v]=mp[{u,v}];
            }
            ans=max(ans,dp[v]);
            dfs(v,mp,dp,id,adj,ans);}
        }
        
    
}
void solve() {
ll n;
cin>>n;
map<pair<ll,ll>,ll> mp;
vector<ll> dp(n+1,-1);
vector<ll> id(n+1,-1);
vector<vector<ll>> adj(n+1);
ll ans=1;
dp[1]=1;
id[1]=0;
FOR(i,0,n-1){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    mp[{u,v}]=i+1;
    mp[{v,u}]=i+1;
}
// cout<<dp<<" "<<id<<" "<<mp<<" "<<adj<<endl;
dfs(1,mp,dp,id,adj,ans);
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