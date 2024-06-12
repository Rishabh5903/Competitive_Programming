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
void solve(int k) {
ll n,x;
cin>>n>>x;
vl l1(n);ll mino=INF,maxo=0;
for(ll i=0;i< n;i++){
cin>>l1[i];mino=min({mino,l1[i]});maxo=max({maxo,l1[i]});
}
vl l={l1[0]};
FOR(i,0,n-1){
    if(l1[i]!=l1[i+1])l.pb(l1[i+1]);
}n=l.size();
// if(k==109){cout<<n<<" "<<x<<" "<<l<<endl;}
if(n==1){
    ce((max({l[0],x})-1));return;
}
ll x1=-1,x2=-1;
if(mino>1)x1=mino-1;if(maxo<x)x2=maxo+1;
if(x1!=-1){
    ll mino=abs(x1-l[0])+abs(l[1]-l[0]),ind=0;
    FOR(i,0,n-1){ll temp;
        temp=min({abs(l[i]-1)+abs(l[i+1]-x1),abs(l[i]-x1)+abs(l[i+1]-1)});
        if(temp<mino){mino=temp;ind=i+1;}
    }
    if((abs(x1-l[n-1])+abs(l[n-2]-l[n-1]))<mino){
        l.pb(x1);l.pb(1);
    }
    else{
        if(ind==0){l.insert(l.begin(),x1);l.insert(l.begin(),1);}
        else{
            if(abs(l[ind-1]-1)+abs(l[ind]-x1) <= abs(l[ind-1]-x1)+abs(l[ind]-1)){l.insert(l.begin()+ind,x1);l.insert(l.begin()+ind,1);}
            else{l.insert(l.begin()+ind,1);l.insert(l.begin()+ind,x1);}
        }
    }
    n+=2;
}
if(x2!=-1){
    ll mino=abs(x2-l[0])+abs(l[1]-l[0]),ind=0;
    FOR(i,0,n-1){ll temp;
        temp=min({abs(l[i]-x)+abs(l[i+1]-x2),abs(l[i]-x2)+abs(l[i+1]-x)});
        if(temp<mino){mino=temp;ind=i+1;}
    }
    if(abs(x2-l[n-1]+abs(l[n-2]-l[n-1]))<mino){
        l.pb(x2);l.pb(x);
    }
    else{
        if(ind==0){l.insert(l.begin(),x2);l.insert(l.begin(),x);}
        else{
            if(abs(l[ind-1]-x)+abs(l[ind]-x2) <= abs(l[ind-x]-x2)+abs(l[ind]-x)){l.insert(l.begin()+ind,x2);l.insert(l.begin()+ind,x);}
            else{l.insert(l.begin()+ind,x);l.insert(l.begin()+ind,x2);}
        }
    }
    n+=2;
}
// ce(l);
ll ans=0;
FOR(i,0,n-1){
    ans+=abs(l[i]-l[i+1]);
}ce(ans);
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