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
ll modmul(ll a,ll b,ll m){ a %= m;b %= m; return (a * b) % m;}
ll modadd(ll a,ll b,ll m){ a %= m;b %= m; return (a + b) % m;}
ll modsub(ll a,ll b,ll m){ a %= m;b %= m; return (a - b + m) % m;}
ll gcd(ll a, ll b){ if(b == 0) return a; return gcd(b, a % b);}
ll expo(ll a,ll n,ll md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
ll expo(ll a,ll n){ ll res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
ll modinv(ll b, ll m) {
return expo(b, m - 2, m);
}
ll moddiv(ll a, ll b, ll m) {
a %= m; b %= m;
ll inv = modinv(b, m); 
 return modmul(a, inv, m);
}
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
void coutv(vl v){
ll sz=v.size();
FOR(i,0,sz)cout<<v[i]<<' ';cout<<endl;
}
void couta(ll a[],ll n){
FOR(i,0,n)cout<<a[i]<<' ';cout<<endl;
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
cin>>n;
priority_queue<tuple<int, int, int>, std::vector<tuple<int, int, int>>, greater<>> pq;
int sz=sqrt(2*n)+100;
vector<pair<ll,ll>> seq;
FOR(i,0,sz){
    FOR(j,0,i+1){
        int k=i-j;
        seq.pb({j,k});
    }
}
reverse(all(seq));
// ce(seq);
// FOR(x,0,sz+10)FOR(y,0,sz+10){
//     pq.push({2,1,1});
//     pq.push({3,2,1});
//     pq.push({3,1,2});
//     pq.push({4,2,2});seq.pop_back();
// // }
ll l[n];
for(ll i=0;i< n;i++){
cin>>l[i];
if(l[i]==1){
    if(pq.size()){
        auto [x,y,z]=pq.top();
        if(seq.size()){ll x2=3*seq.back().first+1,y2=3*seq.back().second+1;
            ll val=(x2+y2);
            if((val < x) || (val==(x) && (x2<y)) || (val==(x) && (x2 == y) && (y2 < z)) ){
                auto [x1,y1]=seq.back();seq.pop_back();cout<<(3*x1+1)<<" "<<(3*y1+1)<<endl;
                // pq.push({3*x+3*y+2,3*x+1,3*y+1});
                pq.push({3*x1+3*y1+3,3*x1+2,3*y1+1});
                pq.push({3*x1+3*y1+6,3*x1+2,3*y1+2});
                pq.push({3*x1+3*y1+3,3*x1+1,3*y1+2});
            }
            else
            {cout<<y<<" "<<z<<endl;pq.pop();}
        }
        else
        {cout<<y<<" "<<z<<endl;pq.pop();}
    }
    else{
        auto [x,y]=seq.back();seq.pop_back();
        pq.push({3*x+3*y+2,3*x+1,3*y+1});
        pq.push({3*x+3*y+3,3*x+2,3*y+1});
        pq.push({3*x+3*y+6,3*x+2,3*y+2});
        pq.push({3*x+3*y+3,3*x+1,3*y+2});
        auto [a,b,c]=pq.top();pq.pop();
        cout<<b<<" "<<c<<endl;
    }
}
else{
    auto [x,y]=seq.back();seq.pop_back();cout<<(3*x+1)<<" "<<(3*y+1)<<endl;
    // pq.push({3*x+3*y+2,3*x+1,3*y+1});
    pq.push({3*x+3*y+3,3*x+2,3*y+1});
    pq.push({3*x+3*y+6,3*x+2,3*y+2});
    pq.push({3*x+3*y+3,3*x+1,3*y+2});

    
    // auto [a,b,c]=pq.top();pq.pop();coutv({a,b,c});
    // cout<<b<<" "<<c<<endl;
}
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