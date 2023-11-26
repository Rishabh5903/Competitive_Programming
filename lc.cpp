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
    long long dfs(int i,int f,int p,vector<vector<int>>& adj, vector<int>& values){
        // cout<<i<<endl;
        if(adj[i].size()==1 &&i!=0 && f==0)return 0;
        else if(adj[i].size()==1 && i!=0)return values[i];
        // vis[i]=1;
        long long ans=0;
        if(f==1){
            ans+=values[i];
            for(auto j:adj[i]){if(j!=p)ans+=dfs(j,1,i,adj,values);}
        }
        else{
            long long temp1=0,temp2=0;
            
            for(auto j:adj[i]){if(j!=p)temp1+=dfs(j,0,i,adj,values);}
            for(auto j:adj[i]){if(j!=p)temp2+=dfs(j,1,i,adj,values);}
            // cout<<values[i]+temp1<<" "<<temp2<<endl;
            ans=max(values[i]+temp1,temp2);
        }
        return ans;
    }
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        vector<vector<int>> adj(values.size());
        vector<int> vis(values.size(),0);
        for (auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        // cout<<adj<<endl;
        return dfs(0,0,-1,adj,values);
    }
void solve() {
vvi edges={{7,0},{3,1},{6,2},{4,3},{4,5},{4,6},{4,7}};
vi values={2,16,23,17,22,21,8,6};
cout<<maximumScoreAfterOperations(edges,values)<<endl;

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