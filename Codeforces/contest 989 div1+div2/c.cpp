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
void help(int i,int j, set<pair<int,int>>& yes,set<pair<int,int>>& no,set<pair<int,int>>& temp,vector<vector<char>>& v){
    
    if(v[i][j]=='U'){
        v[i][j]='O';
        if(i==0){v[i][j]='P';
        for(auto x:temp)v[x.first][x.second]='P';
        temp.clear();return;}
        else {temp.insert({i,j});help(i-1,j,yes,no,temp,v);}
    }
    else if(v[i][j]=='D'){
        v[i][j]='O';
        if(i==v.size()-1){v[i][j]='P';for(auto x:temp)v[x.first][x.second]='P';temp.clear();return;}
        else {temp.insert({i,j});help(i+1,j,yes,no,temp,v);}
    }
    else if(v[i][j]=='L'){
        v[i][j]='O';
        if(j==0){v[i][j]='P';for(auto x:temp)v[x.first][x.second]='P';temp.clear();return;}
        else {temp.insert({i,j});help(i,j-1,yes,no,temp,v);}
    }
    else if(v[i][j]=='R'){
        v[i][j]='O';
        if(j==v[0].size()-1){v[i][j]='P';for(auto x:temp)v[x.first][x.second]='P';temp.clear();return;}
        else {temp.insert({i,j});help(i,j+1,yes,no,temp,v);}
    }
    else if(v[i][j]=='?' || v[i][j]=='O'){
        for(auto x:temp){
            yes.insert(x);
        }temp.clear();
    }
    else{
        for(auto x:temp)v[x.first][x.second]='P';temp.clear();
    }
}
void solve() {
ll n,m;
cin>>n>>m;
vector<vector<char>> v(n,vector<char>(m));
set<pair<int,int>> yes,no,temp;
for(ll i=0;i< n;i++){
    FOR(j,0,m){
        cin>>v[i][j];
    }
}
FOR(i,0,n){
    FOR(j,0,m){
        temp.clear();
        if(v[i][j]!='O' && v[i][j]!='?' && v[i][j]!='P'){
            help(i,j,yes,no,temp,v);
        }
    }
}
FOR(i,0,n){
    FOR(j,0,m){
        if(v[i][j]=='?'){
            if(i+1 <= n-1 && (yes.find({i+1,j})!=yes.end() || v[i+1][j]=='?')){yes.insert({i,j});continue;}
            if(i-1 >= 0 && (yes.find({i-1,j})!=yes.end() || v[i-1][j]=='?')){yes.insert({i,j});continue;}
            if(j+1 <= m-1 && (yes.find({i,j+1})!=yes.end() || v[i][j+1]=='?')){yes.insert({i,j});continue;}
            if(j-1 >= 0 && (yes.find({i,j-1})!=yes.end() || v[i][j-1]=='?')){yes.insert({i,j});continue;}
        }
    }
}
// ce(yes);
ce(yes.size());
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