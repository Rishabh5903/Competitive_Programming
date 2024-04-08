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
struct Item {
    long long value;
    long long weight;
    long long class_id;
};

// A function to find the maximum length of subsequence
// with the given constraints
long long maxLength(vector<Item>& items, long long l) {
    // Sort the items by class_id and then by weight
    sort(items.begin(), items.end(),  {
        if (a.class_id == b.class_id) return a.weight < b.weight;
        return a.class_id < b.class_id;
    });

    // Get the number of items and classes
    long long n = items.size();
    long long c = items.back().class_id;

    // Create a 2D array to store the optimal solutions
    // dp[i][j] represents the maximum length of subsequence
    // using items from 1 to i and with total weight j
    vector<vector<long long>> dp(n + 1, vector<long long>(l + 1, 0));

    // Loop through the items
    for (long long i = 1; i <= n; i++) {
        // Loop through the possible weights
        for (long long j = 1; j <= l; j++) {
            // Initialize the current solution as the previous one
            dp[i][j] = dp[i - 1][j];

            // Check if the current item can be included
            if (items[i - 1].weight <= j) {
                // Find the previous item of the same class
                long long prev = i - 1;
                while (prev >= 0 && items[prev].class_id == items[i - 1].class_id) {
                    prev--;
                }

                // Calculate the new weight and value after including the current item
                long long new_weight = j - items[i - 1].weight;
                long long new_value = dp[prev][new_weight] + 1;

                // Update the current solution if it is better
                dp[i][j] = max(dp[i][j], new_value);
            }
        }
    }

    // Find the maximum length of subsequence
    long long ans = 0;
    for (long long j = 1; j <= l; j++) {
        ans = max(ans, dp[n][j]);
    }

    // Return the answer
    return ans;
}
void solve() {
ll n;
cin>>n;
ll l[n];
string s;
cin>>s;
for(ll i=0;i< n;i++){
cin>>l[i];
}
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