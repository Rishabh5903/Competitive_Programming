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
int expo(ll a,ll n,ll md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
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
const int MOD = 1e9 + 7;

// Helper function to safely add two numbers under modulo
long long addModulo(long long a, long long b, long long mod) {
    return ((a % mod) + (b % mod)) % mod;
}

// Helper function to safely subtract two numbers under modulo
long long subtractModulo(long long a, long long b, long long mod) {
    return ((a % mod) - (b % mod) + mod) % mod;
}

pair<long long, long long> maxSubarraySum(const vector<int>& arr) {
    if (arr.empty()) return {0, 0};

    long long max_ending_here = 0, max_so_far = 0;
    long long total_sum = 0;

    for (int x : arr) {
        total_sum += x; // Summing up the elements for the total sum

        // Apply Kadane's algorithm without modulo operations
        max_ending_here = std::max(0LL, max_ending_here + x);
        max_so_far = std::max(max_so_far, max_ending_here);
    }

    long long remaining_sum = total_sum - max_so_far; // The sum outside the maximum subarray

    return {max_so_far, remaining_sum};
}
void solve() {
ll n,k;cin>>n>>k;vi v(n);
cinv(v);
pair<ll,ll> p=maxSubarraySum(v);
ce(p.first);
ce((p.second+((p.first%MOD)*expo(2,k,MOD))%MOD)%MOD);
// ll l[n];
// string s;
// cin>>s;
// for(ll i=0;i< n;i++){
// cin>>l[i];
// }
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