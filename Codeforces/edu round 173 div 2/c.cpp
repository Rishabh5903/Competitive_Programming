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
ll maxSubarraySum(const ll arr[], int j,int k) {
    if(j>k)return 0;
    ll maxSum = LLONG_MIN; 
    ll currentSum = 0;

    for (int i = j; i <= k; ++i) {
        currentSum = max(arr[i], currentSum + arr[i]); 
        maxSum = max(maxSum, currentSum); 
    }

    return maxSum;
}
std::pair<long long, long long> minMaxPrefixSum(const std::vector<long long>& arr) {
    long long prefixSum = 0;
    long long minPrefixSum = arr[0];
    long long maxPrefixSum = arr[0];

    for (long long num : arr) {
        prefixSum += num;
        minPrefixSum = std::min(minPrefixSum, prefixSum);
        maxPrefixSum = std::max(maxPrefixSum, prefixSum);
    }
    return {minPrefixSum, maxPrefixSum};
}
void solve() {
ll n;
cin>>n;
ll l[n];
for(ll i=0;i< n;i++){
cin>>l[i];
}
ll ind=-1;
FOR(i,0,n){
    if(l[i]!=1 && l[i]!=-1){ind=i;break;}
}
set<ll> ans;ans.insert(0);
// ll l1=0,r1=ind-1,l2=ind+1,r2=n-1,sz1=ind,sz2=n-1-ind;

ll mino1=0,maxo1=0,mino2=0,maxo2=0;
maxo1=maxSubarraySum(l,0,ind-1);maxo2=maxSubarraySum(l,ind+1,n-1);
FOR(i,0,ind)l[i]*=-1;
FOR(i,ind+1,n)l[i]*=-1;
mino1=maxSubarraySum(l,0,ind-1)*(-1);mino2=maxSubarraySum(l,ind+1,n-1)*(-1);
// cout<<mino1<<" "<<maxo1<<" "<<mino2<<" "<<maxo2<<endl;
FOR(i,mino1,maxo1+1)ans.insert(i);FOR(i,mino2,maxo2+1)ans.insert(i);
FOR(i,0,ind)l[i]*=-1;
FOR(i,ind+1,n)l[i]*=-1;
if(ind!=-1){
vl arr1,arr2={0};
FOR(i,0,ind)arr1.pb(l[i]);arr1.pb(0);reverse(all(arr1));FOR(i,ind+1,n)arr2.pb(l[i]);
// cout<<arr1<<arr2<<endl;
auto x=minMaxPrefixSum(arr1);
auto y=minMaxPrefixSum(arr2);
ll a=x.first+y.first+l[ind],b=x.second+y.second+l[ind];
// cout<<mino1<<" "<<maxo1<<" "<<mino2<<" "<<maxo2<<endl;
FOR(i,a,b+1)ans.insert(i);
}
// sort(all(ans));
ce(ans.size());
for(ll i:ans)cout<<i<<" ";cout<<endl;
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