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
ll maxm(ll a,ll b,ll c){
    if (a>=b && a>=c){
        return a;
    }
    else if(b>=a && c>=a)
    return b;
    else if(c>=a && c>=b)
    return c;
}
void ch(ll n,vector<vector<ll>>& adj,ll& ans,vector<ll>& d,vector<ll>& child){
    if (n==0 || d[n]==0)
    return;
d[n]=0;
if(sza(adj[n])==1 ){
    child[n]=0;
    return;
}
else{
child[n]+=sza(adj[n])-1;
if(n==1)
child[n]+=1;
for(int i:adj[n]){
    // cout<<i<<" debug";
    if(d[i]){
        // cout<<" debug"<<endl;
        ch(i,adj,ans,d,child);
        child[n]+=child[i];
        // cout<<child<<" "<<n<<" "<<i<<" "<<endl;
    }
}}}
// cout<<endl;
void dfs(ll n,vector<vector<ll>>& adj,ll& ans,vector<ll>& d,vector<ll>& child){
        if (n==0 || d[n]==0)
    return;
d[n]=0;
if(sza(adj[n])==1 ){
    child[n]=0;
    return;
}
if(sza(adj[n])==2){
    if(n==1){
        ll c1=adj[1][0];ll c2=adj[1][1];
        // ans+=maxm(child[adj[1][0]],child[adj[1][1]],0);
    if(child[c1]>=child[c2]){
        ans+=child[c1];
        cout<<c1<<" "<<ans<<" "<<endl;
        dfs(c2,adj,ans,d,child);
    }
    else{
        ans+=child[c2];
        cout<<c2<<" "<<ans<<" "<<endl;
        dfs(c1,adj,ans,d,child);
    }
    }
    else{
    ans+=child[n];
    cout<<ans<<" "<<n<<"debug"<<endl;
    return;}
}
else{
    // cout<<adj<<endl<<child<<endl<<n<<endl;
    ll p=maxm(child[adj[n][0]],child[adj[n][1]],child[adj[n][2]]);
    ll c1=0;ll c2=0;
    for(int i:adj[n]){
        if (child[i]!=p && !c1)
        c1=i;
        else if(child[i]!=p)
        c2=i;
    }
    if(child[c1]>=child[c2]){
        ans+=child[c1];
        cout<<c1<<" "<<ans<<" "<<endl;
        dfs(c2,adj,ans,d,child);
    }
    else{
        ans+=child[c2];
        cout<<c2<<" "<<ans<<" "<<endl;
        dfs(c1,adj,ans,d,child);
    }
}
}
// cout<<child<<endl<<n<<endl;

void solve() {
ll n;
cin>>n;
vector<ll> d(n+1,1);
vector<ll> child(n+1,0);
vector<vector<ll>> adj(n+1);
ll ans=0;
for(ll i=0;i< n-1;i++){
ll u,v;
cin>>u>>v;
if(find(adj[v].begin(),adj[v].end(),u)==adj[v].end())
adj[v].push_back(u);
if(find(adj[u].begin(),adj[u].end(),v)==adj[u].end())
adj[u].push_back(v);

}
if(adj[1].size()==1){
    cout<<n-2<<endl;
    
}
else{
ch(1,adj,ans,d,child);
FOR(i,0,n+1){
    d[i]=1;
}
dfs(1,adj,ans,d,child);
cout<<adj<<endl<<child<<endl<<d<<endl;
cout<<ans<<endl;}
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