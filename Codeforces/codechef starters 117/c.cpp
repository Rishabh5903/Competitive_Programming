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
#define cinv(v,size) for( long long int i = 0; i<size;i++)cin>>v[i];
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
void solve() {
        int a, b;
        cin >> a >> b;

        if (a > b) {
            swap(a, b);
        }

        int d = b - a;
        int num = (-1.0 + static_cast<double>(sqrt(1.0 + 8.0 * d))) / 2.0;
        int var = 2 * (d - static_cast<int>((num * (num + 1.0)) / 2.0));
        int ans = static_cast<int>(num + var);

        for (int k = 0; k <= ans; ++k) {
            if (k % 2) {
                int val1 = (k * (k + 1)) / 2 + (d + ceil(k / 2.0));
                int num1 = (-1.0 + static_cast<double>(sqrt(1.0 + 8.0 * val1))) / 2.0;
                int var1 = 2 * (d + static_cast<int>(ceil(k / 2.0)) - static_cast<int>((num1 * (num1 + 1.0)) / 2.0 - (k * (k + 1)) / 2));
                
                int val2 = (k * (k + 1)) / 2 + (d - ceil(k / 2.0));
                if (val2 >= 0) {
                    int num2 = (-1.0 + static_cast<double>(sqrt(1.0 + 8.0 * val2))) / 2.0;
                    int var2 = 2 * (d - static_cast<int>(ceil(k / 2.0)) - static_cast<int>((num2 * (num2 + 1.0)) / 2.0 - (k * (k + 1)) / 2));
                    if (var2 >= 0) {
                        ans = min(ans, static_cast<int>(num2 + var2));
                    }
                }
                if (var1 >= 0) {
                    ans = min(ans, static_cast<int>(num1 + var1));
                }
            } else {
                int val1 = (k * (k + 1)) / 2 + (d + floor(k / 2.0));
                int num1 = (-1.0 + static_cast<double>(sqrt(1.0 + 8.0 * val1))) / 2.0;
                int var1 = 2 * (d + static_cast<int>(floor(k / 2.0)) - static_cast<int>((num1 * (num1 + 1.0)) / 2.0 - (k * (k + 1)) / 2));
                
                int val2 = (k * (k + 1)) / 2 + (d - floor(k / 2.0));
                if (val2 >= 0) {
                    int num2 = (-1.0 + static_cast<double>(sqrt(1.0 + 8.0 * val2))) / 2.0;
                    int var2 = 2 * (d - static_cast<int>(floor(k / 2.0)) - static_cast<int>((num2 * (num2 + 1.0)) / 2.0 - (k * (k + 1)) / 2));
                    if (var2 >= 0) {
                        ans = min(ans, static_cast<int>(num2 + var2));
                    }
                }
                if (var1 >= 0) {
                    ans = min(ans, static_cast<int>(num1 + var1));
                }
            }
        }

        cout << ans << "\n";

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