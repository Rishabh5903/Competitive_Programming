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
ll n,m;
cin>>n>>m;
vl a(n+m+1),b(n+m+1);
// string s;
// cin>>s;
for(ll i=0;i< n+m+1;i++){
cin>>a[i];
}
for(ll i=0;i< n+m+1;i++){
cin>>b[i];
}
if(n>=m){
    swap(n,m);
    swap(a,b);
}
vl anum(n+m+1,0),bnum(n+m+1,0),asum(n+m+1,0),bsum(n+m+1,0);ll atot=0,btot=0;
// cout<<anum<<asum<<bsum<<endl;
FOR(i,0,n+m+1){
    if(i==0){
        if(a[i]>b[i]){anum[0]=1;asum[0]=a[0]-b[0];}
        else{bnum[0]=1;bsum[0]=b[0]-a[0];}
        btot+=b[0];atot+=a[0];
    }
    else{
    if(a[i]>b[i]){anum[i]=anum[i-1]+1;bnum[i]=bnum[i-1];asum[i]=asum[i-1]+a[i]-b[i];bsum[i]=bsum[i-1];}
    else {anum[i]=anum[i-1];bnum[i]=bnum[i-1]+1;asum[i]=asum[i-1];bsum[i]=bsum[i-1]+b[i]-a[i];}btot+=b[i];atot+=a[i];}
}
// cout<<anum<<bnum<<asum<<bsum<<" "<<atot<<" "<<btot<<endl;

FOR(i,0,n+m+1){ll ind,ind2;ll temp;
if(n==0){cout<<(btot-b[i])<<" ";continue;}
if(m==0){cout<<(atot-a[i])<<" ";continue;}
    if(a[i]>b[i]){
        ind=lower_bound(all(anum),n+1)-anum.begin();
        if(i>=ind)ind=lower_bound(all(anum),n)-anum.begin();

    }
    else{
        ind=lower_bound(all(anum),n)-anum.begin();
        // if(i==ind)ind=lower_bound(all(anum),n+1)-anum.begin();
    }
    // ce(ind);
    // if(ind==0 && n<anum[0])ind=n+m+1;
    if(b[i]>a[i]){
        ind2=lower_bound(all(bnum),m+1)-bnum.begin();
        if(i>=ind2)ind2=lower_bound(all(bnum),m)-bnum.begin();

    }
    else{
        ind2=lower_bound(all(bnum),m)-bnum.begin();
        
    }
    // if(ind2==0 && m<bnum[0])ind2=n+m+1;
    // cout<<ind<<" "<<ind2<<endl;
    if(ind<=ind2){temp=btot;
    if(ind<(n+m+1)){
        temp+=asum[ind];
    }
    else{
        temp+=asum[n+m];
    }
    // cout<<temp<<" ";
    if(i<=ind && a[i]>b[i]){
        temp-=a[i];
    }if(i>ind || a[i]<b[i])temp-=b[i];
    }

    else {temp=atot;
    if(ind2<(n+m+1)){
        temp+=bsum[ind2];
    }
    else{
        temp+=bsum[n+m];
    }
    // cout<<temp<<" ";
    if(i<=ind2 && b[i]>a[i]){
        temp-=b[i];
    }if(i>ind2 || b[i]<a[i])temp-=a[i];
    }
    cout<<temp<<" ";
}cout<<endl;
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