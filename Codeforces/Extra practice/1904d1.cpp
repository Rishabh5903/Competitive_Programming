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
bool check_backward(ll start, ll end, const vl &a, const vl &b) {
    vl temp;
    ll curr = 0;
    ll next = a[end - 1];
    FOR(i, start, end) {
        ll index = end - 1 - (i - start); // Adjust index for the subrange
        if (temp.size() > curr) next = temp[curr];
        else next = a[index];
        if (a[index] == next && temp.size() > curr) curr++;
        if (temp.size() > curr) next = temp[curr];
        else next = a[index];
        if (next != b[index]) {
            temp.pb(b[index]);
        }
    }
    return temp.size() == curr;
}
 
bool check_forward(ll start, ll end, const vl &a, const vl &b) {
    vl temp={};
    ll curr=0;
    ll next=a[start];
    FOR(i,start,end){
        if(temp.size()>curr) next=temp[curr];
        else next=a[i];
        if(a[i]==next && temp.size()>curr) curr++;
        if(temp.size()>curr) next=temp[curr];
        else next=a[i];
        if(next!=b[i]){
            temp.pb(b[i]);
        }
    }
    return temp.size()==curr;
}

bool check_any_index(const vl &a, const vl &b) {
    ll n = a.size();
    if (check_backward(0, n, a, b) || check_forward(0, n, a, b)) return true;
    
    for (ll i = 0; i <= n; i++) {
        bool left_ok = i == n || check_backward(i, n, a, b);
        bool right_ok = i == 0 || check_forward(0, i, a, b);
        if (left_ok && right_ok) return true;
        // cout<<i<<" "<<left_ok<<" "<<right_ok<<endl;
    }

    return false;
}

void solve(int t) {
    ll n;
    cin >> n;
    vl a(n), b(n);
    // if(t==63)cout<<a<<b<<endl;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    if (check_any_index(a, b)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve(t);
}
}