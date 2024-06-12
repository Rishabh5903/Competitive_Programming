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
ll N;
cin>>N;
string st;
cin>>st;
ll n=0,s=0,e=0,w=0;
for(char i:st){
    if(i=='N')n++;else if(i=='S')s++;else if(i=='E')e++;else if(i=='W')w++;}
if((abs(n-s))%2 || (abs(e-w))%2)ce("NO");
else{
    ll f1=0,f2=0;if(n<s)f1=1;if(e<w)f2=1;
    ll n1=0,n2=0,s1=0,s2=0,e1=0,e2=0,w1=0,w2=0;

    if(f1){n1=n;n2=0;s1=n+(s-n)/2;s2=(s-n)/2;}
    else{s1=s;s2=0;n1=s+(abs(s-n))/2;n2=(abs(s-n))/2;}
    if(f2){e1=e;e2=0;w1=e+(w-e)/2;w2=(w-e)/2;}
    else{w1=w;w2=0;e1=w+(abs(w-e))/2;e2=(abs(w-e))/2;}
    if(n==s && e==w){
        if((n%2 && e==0)||(e%2 && n==0)){ce("NO");return;}
        // else{
        //     if(n%2 == 0){n1=n/2;n2=n/2;s1=s/2;s2=s/2;}
        //     else{n1=n/2;n2=n/2;s1=s/2;s2=s/2;}
        // }
    }
    if(n==s){
        if(n%2){n1=n;n2=0;s1=s;s2=0;}
        else {n1=n/2;n2=n/2;s1=s/2;s2=s/2;}
    }
    if(e==w){
        if(e%2){e2=e;e1=0;w2=w;w1=0;}
        else {e1=e/2;e2=e/2;w1=w/2;w2=w/2;}
    }
    // n1=2*minm({n,s});n2=2*minm({e,w});
    FOR(i,0,N){
        if(st[i]=='N'){
            if(n1){cout<<'R';n1--;}
            else{cout<<'H';n2--;}
        }
        else if(st[i]=='S'){
            if(s1){cout<<'R';s1--;}
            else{cout<<'H';s2--;}
        }
        else if(st[i]=='E'){
            if(e1){cout<<'R';e1--;}
            else{cout<<'H';e2--;}
        }
        else if(st[i]=='W'){
            if(w1){cout<<'R';w1--;}
            else{cout<<'H';w2--;}
        }
    }
    cout<<endl;
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