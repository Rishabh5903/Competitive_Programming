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
int search(vector<int> arr,int l,int r,int x){
    while(l<=r){
int mid=(l+r)/2;
if(arr[mid]==x)return mid;
if(x<arr[mid])r=mid-1;
else l=mid+1;}
return -1;
}
int dp[2001][3000]={2};

int solve(vector<int> stones,int i,int k){
    // cout<<dp[0][0]<<dp[1][0]<<dp[0][1]<<dp[2][2]<<endl;
    // cout<<"debug"<<dp[i][k]<<endl;
    if(i==stones.size()-1)return true;
    // if(dp[i][k]!=-1)return dp[i][k];
    int ans=0;int a=search(stones,0,stones.size()-1,stones[i]+k),b=search(stones,0,stones.size()-1,stones[i]+k-1),c=search(stones,0,stones.size()-1,stones[i]+k+1);
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if(a!=-1)ans=ans||solve(stones,a,k);
    if(b!=-1 && k>=2)ans=ans||solve(stones,b,k-1);
    if(c!=-1)ans=ans||solve(stones,c,k+1);
    return dp[i][k]=ans;
}
void s() {
    int n;cin>>n;
vector<int> l(n);
for(ll i=0;i< n;i++){
cin>>l[i];
}
cout<<solve(l,0,1)<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
s();
}
}