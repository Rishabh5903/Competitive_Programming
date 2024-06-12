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
void solve() {
    ll n;
    cin >> n;
    vl l(n);
    for (ll i = 0; i < n; i++) {
        cin >> l[i];
    }
vl l2 = l,l3=l;
    // First approach
    ll prev = 0, f = 1, i = 0, ans = 1;
    while (i < (l.size() - 1)) {
        ll temp = gcd(l[i], l[i + 1]);
        // cout<<temp<<" "<<prev<<endl;
        if (temp < prev) {
            if (f == 0) {
                // ce("NO");
                ans = 0;
                break;
            } else {
                f--;
                l.erase(l.begin() + i + 1);
                n--; // Reduce the size of n after erasing an element
            }
        } else {
            prev = temp;
            i++;
        }
        
    }
    prev = 0, f = 0, i = 0; ll ans3 = 1;
    while (i < (l3.size() - 2)) {
        ll temp = gcd(l3[i], l3[i + 1]);
        // cout<<temp<<" "<<prev<<endl;
        if (temp < prev) {
            if (f == 0) {
                // ce("NO");
                ans3 = 0;
                break;
            }
        } else {
            prev = temp;
            i++;
        }
        
    }

    // Create a copy of l and reverse it for the second approach
    
    std::reverse(l2.begin(), l2.end());

    // Second approach (in reverse order)
    ll prev2 = 0, f2 = 1, j = 0, ans2 = 1;
    if(ans){ce("YES");return;}
    // ce(l2);
    while (j < (l2.size() - 1)) {
        ll temp2 = gcd(l2[j], l2[j + 1]);
        // cout<<temp2<<" "<<prev2<<endl;
        if (temp2 > prev2 && j>=1) {
            if (f2 == 0) {
                // ce("NO");
                ans2 = 0;
                break;
            } else {
                f2--;
                l2.erase(l2.begin() + j + 1);
                n--; // Reduce the size of n after erasing an element
            }
        } else {
            prev2 = temp2;j++;
        }
        
    }

    // Compare results of both approaches
    if (ans || ans2 || ans3) {
        ce("YES");
    } else {
        ce("NO");
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