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
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for( long long int i = a; i<b;i++)
#define pb push_back
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
ll maxm(ll n,vector<ll> v){
if(v[0]>=v[1]) return v[0];
else return v[1];
}
ll minm(ll n,vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
ll n;
cin>>n;
ll l[n];map<ll,ll> cnt;vector<ll> nos;
for(ll i=0;i< n-1;i++){
cin>>l[i];
// if(!cnt[l[i]]){nos.push_back(l[i]);}
cnt[l[i]]++;
}
vector<ll> v;
// for (ll i:nos)
// {
//     v.push_back(cnt[i]);}
for(auto i:cnt){
    v.push_back(i.second);
}
    v.push_back(1);
sort(all(v));
// cout<<v<<endl;
if(v.size()>=v[v.size()-1]) cout<<v.size()<<endl;
else{
    ll temp=v.size();
    for (ll i = v.size()-1; i >=0; i--)
    {
        while (temp<v[i] && v[i]>=v[i-1])
        {
                        temp++;v[i]--;
            
        }
        // ll var=(v[i]+temp)/2;
        // temp+=v[i]-var;
        // v[i]=var;
        if(i>=1){if(temp>=v[i-1]) break;}
        // cout<<v<<endl;
        
    }
    sort(all(v));
    ll ans=maxm(2,{temp,v.back()});
    for (ll i = v.size()-2; i >=0; i--){
        ans=maxm(2,{ans,v[i]+v.size()-i-1});
    }
    cout<<ans<<endl;
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