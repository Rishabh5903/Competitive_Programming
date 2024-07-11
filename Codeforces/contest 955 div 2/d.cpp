#include <bits/stdc++.h>
#include <sstream> 
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
vector<vector<ll>> computePrefixSum(const vector<string>& matrix) {
    ll m = matrix.size();
    ll n = matrix[0].size();
    vector<vector<ll>> prefix(m + 1, vector<ll>(n + 1, 0));

    for (ll i = 1; i <= m; ++i) {
        for (ll j = 1; j <= n; ++j) {
            ll val = matrix[i - 1][j - 1] - '0';
            prefix[i][j] = val + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
    // ce(prefix);
    return prefix;
}

unordered_map<ll, ll> countKxKSums(const vector<vector<ll>>& prefix, ll k) {
    ll m = prefix.size() - 1;
    ll n = prefix[0].size() - 1;
    unordered_map<ll, ll> sums;

    for (ll i = k; i <= m; ++i) {
        for (ll j = k; j <= n; ++j) {
            ll total = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
            sums[total]++;
        }
    }
    // ce(sums);
    return sums;
}

ll isUniqueKxKSum(const vector<string>& matrix, ll k) {
    vector<vector<ll>> prefix = computePrefixSum(matrix);
    unordered_map<ll, ll> sums = countKxKSums(prefix, k);
    ll ans=0;

        for (auto i : sums) ans=gcd(ans,k*k-2*i.first);
        return ans;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<vector<ll>> heights(n, vector<ll>(m));
        vector<string> types(n);

        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cin >> heights[i][j];
            }
        }

        for (ll i = 0; i < n; ++i) {
            cin >> types[i];
        }

        long long sumSnowy = 0, sumNonSnowy = 0;
        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                if (types[i][j] == '0') {
                    sumSnowy += heights[i][j];
                } else {
                    sumNonSnowy += heights[i][j];
                }
            }
        }

        ll x = isUniqueKxKSum(types, k);
        ll diff = abs(sumNonSnowy - sumSnowy);
        if(diff==0){ce("YES");continue;}
        if(x==0 || abs(diff)%x!=0)ce("NO");else ce("YES");
    }

    return 0;
}
