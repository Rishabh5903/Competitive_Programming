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
ll maxm(ll n,vector<ll> v){
sort(all(v));
return v[n-1];
}
ll minm(ll n,vector<ll> v){
sort(all(v));
return v[0];
}
const int n=40001;
vector<ll> p={0};
FOR(i,1,40001){
    if(ispal(i)) p.push_back(i);
}
const int M=p.size()-1;
ll dp[n+1][M+1]={0};
bool ispal(ll n){
    string s=to_string(n);
    ll f=1;
    FOR(i,0,s.size()/2){
        if(s[i]!=s[s.size()-i-1]){f=0;break;}
    }
    if(f) return 1;
    else return 0;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int k = 1;
cin >> k;

FOR(i,1,M+1){
    dp[0][i]=1;
}
FOR(i,1,n+1){
    FOR(j,1,M+1){
        if(i>=p[j])
        dp[i][j]=(dp[i][j-1]+dp[i-p[j]][j])%MOD;
        else dp[i][j]=(dp[i][j-1])%MOD;
    }
}
for (int t = 1; t <= k; t++) {
// cout << 'Case #' << t << ': ';
ll N;
cin>>N;
// cout<<"debug"<<endl;
cout<<dp[N][M]<<endl;
}
}