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
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
void solve() {
ll n;
cin>>n;
string s;
cin>>s;
ll l=0;ll r=n-1;ll o=0;ll c=0;
ll f1=0;ll f2=0;

FOR(i,0,n){
    if(s[i]=='(')
    o+=1;
    else
    c+=1;
    if(o>c)
    f1=1;
    else if(c>o)
    f2=1;
}
if(o!=c)
cout<<-1<<endl;
else{
    ll val=f1+f2;
    // ll ans[n];
    cout<<val<<endl;
    if(val==1){
    FOR(i,0,n){
        cout<<1<<" ";
    }}
    else{
        ll o1=0;
        ll c1=0;
    FOR(i,0,n){
        if(s[i]=='('){
        o1+=1;
        if(o1>c1)
        cout<<1<<" ";
        else
        cout<<2<<" ";
        }
        else{
        c1+=1;
        if(o1<c1)
        cout<<2<<" ";
        else
        cout<<1<<" ";
        }

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