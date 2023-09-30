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
ll maxm(vector<ll> v){
sort(all(v));
return v[v.size()-1];
}
ll minm(vector<ll> v){
sort(all(v));
return v[0];
}
struct comp {
    bool operator()(vector<ll> a, vector<ll> b) const {
        return a.size()<b.size();
    }
};
void solve() {
ll n,d;
cin>>n>>d;
vector<set<ll>> v;ll temp=1;
for(ll i=0;i< d;i++){ll x,y;
cin>>x>>y;
vector<ll> size;ll ind1=-1;ll ind2=-1;
FOR(j,0,v.size()){
    // cout<<j<<endl;
    if(v[j].find(x) != v[j].end() ){
        // cout<<"debug"<<y<<endl;
        // cout<<(v[j].find(y) != v[j].end()) <<endl;
        if(v[j].find(y)!=v[j].end()) {temp++;ind1=-2;ind2=-2;}
        else {ind1=j;}
        // cout<<v[j]<<endl;
        // f=1;
    }
    else if(v[j].find(y)!=v[j].end() ){
        ind2=j;
    }
    // size.push_back(v[j].size());
}
if(ind1==-1 && ind2==-1){
    set<ll> tempo;tempo.insert(x);tempo.insert(y);v.push_back(tempo);
}
else if(ind1==-1){
    v[ind2].insert(x);
}
else if(ind2==-1){
    v[ind1].insert(y);
}
else if(ind1!=-2){
    for(auto j:v[ind2]){
        v[ind1].insert(j);
    }
    v.erase(v.begin()+ind2);
}
for(auto j:v){
    size.push_back(j.size());
}
sort(all(size));
// cout<<v<<endl;
ll ind=size.size()-1;ll ans=0;ll temp2=temp;
FOR(j,0,temp){
    if(ind<0)break;
    ans+=size[ind];
    ind--;temp2--;
}
cout<<ans-1+temp2<<endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
// cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve();
}
}