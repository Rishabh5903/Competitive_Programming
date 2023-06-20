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
sort(all(v));
return v[n-1];
}
ll minm(ll n,vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
ll n;
cin>>n;
string s1,s2;

cin>>s1>>s2;
if(s1==s2){cout<<0<<endl;return;}
ll a=0;ll b=0;ll var=0;int p=0,q=0;
FOR(i,0,n){
    if(s1[i]!=s2[i]){a++;
        if(i<n/2)p++;
    if(i>n/2)q++;
    }
    if(s1[i]!=s2[n-i-1])b++;
    if(n%2 && i==n/2 && s1[i]!=s2[i]){var++;}

}
// cout<<a<<" "<<b<<endl;
ll temp=maxm(2,{2*(b-1),0});ll temp1=maxm(2,{2*(a-1),0});
// if(b%2==0){if(!var)temp+=2;}
// if(var)temp++;
if(maxm(2,{(a-1),0})%2==1){temp1+=2;}else temp1+=1;
if(maxm(2,{(b-1),0})%2==0){temp+=2;}else temp+=1;
// if(var)temp1++;
// cout<<temp1<<" "<<temp<<endl;
cout<<minm(2,{temp1,temp})<<endl;
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