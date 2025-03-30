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
char fn(char& c1,char& c2){
    if(c1!='I' && c2!='I')return 'I';
    else if(c1!='L' && c2!='L')return 'L';
    else if(c1!='T' && c2!='T')return 'T';
}
void solve() {
ll n;
cin>>n;
string st;
cin>>st;vector<char> s;for(char c:st)s.pb(c);
if(n==1 || n==2){ce(-1);return;}
vl ans;
ll steps=0,n1=0,n2=0,n3=0,d1=0,d2=0;char c1,c2,c3;
FOR(i,0,n)if(s[i]=='L')n1++;else if(s[i]=='I')n2++;else n3++;
vector<pair<ll,char>> v={{n1,'L'},{n2,'I'},{n3,'T'}};sort(all(v));
d1=(n3=v[2].first)-(n1=v[0].first),d2=v[2].first-(n2=v[1].first);
c1=v[0].second,c2=v[1].second,c3=v[2].second;
if(d1==0){ce(0);return;}
FOR(i,0,n-1){
    if(s[i]!=s[i+1] && (s[i]==c3 || s[i+1]==c3)){
        if(s[i]==c3)
        FOR(j,0,d2){
            ans.pb(i+1);s.insert(s.begin()+i+1,fn(s[i],s[i+1]));
            ans.pb(i+1);s.insert(s.begin()+i+1,fn(s[i],s[i+1]));
            n1++;n2++;
        }
        else{
            FOR(j,0,d2){
                ans.pb(i+1+2*j);s.insert(s.begin()+i+2*j+1,fn(s[i+2*j],s[i+2*j+1]));
                ans.pb(i+1+2*j+1);s.insert(s.begin()+i+2*j+2,fn(s[i+2*j+1],s[i+2*j+2]));
                n1++;n2++;
            }
        }
        d1-=d2;d2=0;break;
    }
}
ll temp1=d1,temp2=2*n-ans.size();
FOR(j,0,min(temp1,temp2)){
    if(d1==0)break;
    FOR(i,0,s.size()-1)if(s[i]!=s[i+1] && s[i]!=c1 && s[i+1]!=c1){
        ans.pb(i+1);n1++;d1--;s.insert(s.begin()+i+1,c1);
        if(d1==0)break;
    }
}
FOR(i,0,s.size()-1){
    if(s[i]!=s[i+1] && (s[i]!=c1 || s[i+1]!=c1)){
        if(s[i+1]==c1)
        FOR(j,0,d1){
            ans.pb(i+1);s.insert(s.begin()+i+1,fn(s[i],s[i+1]));
            ans.pb(i+1);s.insert(s.begin()+i+1,fn(s[i],s[i+1]));
            ans.pb(i+3);s.insert(s.begin()+i+3,fn(s[i+2],s[i+3]));
            ans.pb(i+3);s.insert(s.begin()+i+3,fn(s[i+2],s[i+3]));
            n1+=2;n2++;n3++;
        }
        else{
            FOR(j,0,d1){
                ans.pb(i+1);s.insert(s.begin()+i+1,fn(s[i],s[i+1]));
                ans.pb(i+1);s.insert(s.begin()+i+1,fn(s[i],s[i+1]));
                ans.pb(i+2);s.insert(s.begin()+i+2,fn(s[i+1],s[i+2]));
                ans.pb(i+4);s.insert(s.begin()+i+4,fn(s[i+3],s[i+4]));
                n1+=2;n2++;n3++;
            }
        }
        break;
    }
}
// ce(ans);ce(s);cout<<n1<<" "<<n2<<" "<<n3<<endl;
if(n1==n2 && n2==n3 && ans.size()<=2*n){
    ce(ans.size());for(ll i:ans)ce(i);
}else ce(-1);

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