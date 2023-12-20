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

bool help(ll i,ll j,vl& l,ll k){
    if(j==l.size() && i==-1)return true;
    if(j==l.size()){
        if(l[i]<=k)return help(i-1,j,l,k-1);
    }
    else if(i==-1){
        if(l[j]<=k)return help(i,j+1,l,k-1);
    }
    else{
        if(l[i]==l[j] && l[i]<k)return help(i-1,j,l,k-1)&&help(i,j+1,l,k-1);
        else{
            if(l[i]<l[j] && l[i]<k)return help(i-1,j,l,k-1);
            else if(l[i]>l[j] && l[j]<k)return help(i,j+1,l,k-1);
        }
    }return false;
}
void solve() {
ll n;
cin>>n;
vl l(n);ll maxo=0;vl ind={};
for(ll i=0;i< n;i++){
cin>>l[i];maxo=maxm({maxo,l[i]});if(l[i]==maxo)ind.pb(i);
}
ll ind1=ind[ind.size()/2],ind2=-1;
if(ind.size()%2==0)ind2=ind[ind.size()/2-1];

ll low=1,high=1e9+3*1e5,mid;
while(low<=high){
    mid=(low+high)/2;
    if(help(ind1,ind1,l,mid)&&((ind2!=-1)? help(ind2,ind2,l,mid) :1))high=mid-1;
    else low=mid+1;
}
cout<<(mid-1)<<endl;
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