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
ll modmul(ll a,ll b,ll m){ a %= m;b %= m; return (a * b) % m;}
ll modadd(ll a,ll b,ll m){ a %= m;b %= m; return (a + b) % m;}
ll modsub(ll a,ll b,ll m){ a %= m;b %= m; return (a - b + m) % m;}
ll gcd(ll a, ll b){ if(b == 0) return a; return gcd(b, a % b);}
ll expo(ll a,ll n,ll md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
ll expo(ll a,ll n){ ll res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
// const ll INF = 1e18;
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
const int MAX=1000005;
const int INF=1000000000;

int le[MAX],ri[MAX],temp[MAX],arr[MAX],fr[MAX];
ll help(int left,int right){
    if(right-left < 2)return 0;
    int mid=(right+left)/2;
    // ce("dbg0");
    ll ans=help(left,mid)+help(mid,right);
    // ce("dbg1");
    int l=left,r=mid;
    while(l<mid || r<right){
        int a = (l<mid ? le[l] : INF);
        int b = (r<right ? ri[r] : INF);

        if(a>b){ans+=mid-l;r++;}
        else l++;
    }
    // ce("dbg2");
    merge(le+left,le+mid,le+mid,le+right,temp);
    FOR(i,0,right-left){
        le[left+i]=temp[i];
    }
    merge(ri+left,ri+mid,ri+mid,ri+right,temp);
    FOR(i,0,right-left){
        ri[left+i]=temp[i];
    }
    // ce("dbg3");
    return ans;

}

void solve() {
int n;
cin>>n;

for(ll i=0;i< n;i++){
cin>>arr[i];temp[i]=arr[i];
}
// ce("dbg4");
sort(temp,temp+n);
FOR(i,0,n){
    arr[i]=lower_bound(temp,temp+n,arr[i])-temp;
}
// ce("dbg5");
FOR(i,0,n){
    fr[arr[i]]++;
    le[i]=fr[arr[i]];
}
memset(fr,0,sizeof(fr));
// ce("dbg6");
for(int i=n-1;i>=0;i--){
    fr[arr[i]]++;ri[i]=fr[arr[i]];
}
// ce("dbg0");
cout<<help(0,n)<<endl;
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