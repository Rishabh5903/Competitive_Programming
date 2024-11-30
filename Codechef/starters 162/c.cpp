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
long long reduceArray(vector<long long>& arr) {
    int n = arr.size();
    
    // Pair each element with its index and sort by value
    vector<pair<long long, int>> indexedArr;
    for (int i = 0; i < n; ++i) {
        indexedArr.emplace_back(arr[i], i);
    }
    sort(indexedArr.begin(), indexedArr.end()); // Sort by values

    set<int> removed; // To keep track of removed indices
    for (const auto& [val, idx] : indexedArr) {
        if (removed.count(idx)) {
            continue; // Skip already removed elements
        }

        // Check if it forms a valid triplet
        if (idx > 0 && idx < n - 1) { // Needs left and right neighbors
            int left = idx - 1;
            int right = idx + 1;
            
            if (!removed.count(left) && !removed.count(right)) {
                if (arr[idx] < arr[left] && arr[idx] < arr[right]) {
                    // Perform the reduction
                    arr[idx] = arr[left] + arr[right] - arr[idx];
                    removed.insert(left);
                    removed.insert(right);
                }
            }
        }
    }

    // Find the maximum value in the reduced array
    long long maxVal = LLONG_MIN;
    for (int i = 0; i < n; ++i) {
        if (!removed.count(i)) {
            maxVal = max(maxVal, arr[i]);
        }
    }
    return maxVal;
}

void solve() {
ll n;
cin>>n;
string s;
cin>>s;
vl v;
ll temp=1;
FOR(i,1,n){
    if(s[i]==s[i-1])temp++;
    // else{
    //     v.pb(temp);temp=1;
    // }
}
ce(temp);
// v.pb(temp);
// ll ans=v[0];
// // ce(v);
// if(v.size()==1){ce(v[0]);return;}
// FOR(i,0,v.size()-1){
//     // ce(i);
//     if(v[i+1]<ans){
//         if((i+1) == (v.size()-1)){break;}
//         else if(v[i+2]>=v[i+1]){
//             ans=ans+v[i+2]-v[i+1];
//             i++;
//         }
//     }
//     else{
//         ans=v[i+1];
//     }
// }
// ce(ans);
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