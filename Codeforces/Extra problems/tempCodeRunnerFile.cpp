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
void solve() {
ll n;
cin>>n;
vl l(n);vector<pair<ll,ll>> v;
for(ll i=0;i< n;i++){
cin>>l[i];
if(l[i]!=-1)v.pb({l[i],i});
}
ll prev=0;
if(v.size()==0){
    FOR(i,0,n){
        if(i%2)l[i]=2;else l[i]=1;
    }coutv(l);return;
}
FOR(i,0,v.size()){
    if(i==0){
        ll temp=v[i].second-1;
        while(temp>=0){
            if((v[i].second-temp)%2)l[temp]=2*v[i].first;else l[temp]=v[i].first;temp--;
        }
    }
    else{
    ll f = 1;
    // if ((v[i].first / v[i-1].first) % 2 || (v[i-1].second / v[i].second) % 2) f = 0;
    if ((v[i].first >= v[i-1].first) && 
        (ceil(log2(v[i].first / (v[i-1].first))) > (v[i].second - v[i-1].second) ||
         ((v[i].second-v[i-1].second-static_cast<int>(ceil(log2(v[i].first / (v[i-1].first))))) % 2 == 1))) {
        f = 0;
    }
    if ((v[i-1].first > v[i].first) && 
        (ceil(log2(v[i-1].first / (v[i].first))) > (v[i].second - v[i-1].second) ||
         ((v[i].second-v[i-1].second-static_cast<int>(ceil(log2(v[i-1].first / (v[i].first))))) % 2 == 1))) {
        f = 0;
    }
        if(!f){ce(-1);return;}
        else{
            ll left=v[i-1].second+1,right=v[i].second-1;
            while(left<=right){
                if(l[left-1]==1)l[left]=2;else l[left]=l[left-1]/2;
                if(l[right+1]==1)l[right]=2;else l[right]=l[right+1]/2;
                left++;right--;
            }
        }
    }

}
FOR(i,v.back().second+1,n){
    if((i-v.back().second)%2)l[i]=l[v.back().second]*2;else l[i]=l[v.back().second];
}
ll ans=1;
// coutv(l);
FOR(i,0,n-1){
    if((l[i]==l[i+1]/2) || (l[i+1]==l[i]/2))continue;else {ans=0;break;}
}   if(!ans)ce(-1);
    else coutv(l);
    // else ce(-1);

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