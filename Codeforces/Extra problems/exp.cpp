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

int chk(int i,int j,string & a,string & b, int t){
    int ans=0;
    if(t==1){
        if(a[i]=='A')ans++;
        if(b[j]=='A')ans++;
        if(b[j+1]=='A')ans++;
    }
    else if(t==2){
        if(a[i]=='A')ans++;
        if(b[j]=='A')ans++;
        if(a[i+1]=='A')ans++;
    }
    else{
        int cnt1=0,cnt2=0;
        if (a[i]=='A')cnt1++; if(a[i+1]=='A')cnt1++;if(a[i+2]=='A')cnt1++;
        if (b[j]=='A')cnt2++; if(b[j+1]=='A')cnt2++;if(b[j+2]=='A')cnt2++;
        // ce("debug4");
        return ((cnt1>=2)?1:0 + (cnt2>=2)?1:0);
    }
    return ((ans>=2) ? 1:0);
}
int help(int i, int j, string &a, string &b, int &n, vvi &dp) {
    if (dp[i][j] != -1) return dp[i][j];
    if (i >= n) return dp[i][j] = 0; 
    
    if (i == n - 1 && j == 0) {
        return dp[i][j] = chk(i, j, a, b, 0);
    } else if (i == n - 2 && j == 2) {
        return dp[i][j] = chk(i, j, a, b, 1);
    } else {
        if(j==0)return dp[i][j]=maxm({chk(i,j,a,b,0)+help(i+1,1,a,b,n,dp),chk(i,j,a,b,2)+help(i+3,0,a,b,n,dp)});
        else if(j==1)return dp[i][j]=maxm({chk(i,j,a,b,1)+help(i+1,1,a,b,n,dp)});
    }
    return 0;
}
void solve() {
    int n;
    cin >> n;
    vvi dp(n, vi(3, -1));  
    string a, b;
    cin >> a >> b;

    help(0, 0, a, b, n, dp);
    cout << dp[0][0] << endl;
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