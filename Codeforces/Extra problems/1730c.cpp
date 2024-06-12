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
#define FOR(i,n) for( long long int i = 0; i<n;i++)
#define pb push_back
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void solve() {
string s;
cin>>s;
ll mino=INF;
ll n=sza(s);
vector<ll> sufmin(n);

for (ll i = n-1; i >=0; i--)

{
if(s[i]-'0'<mino){
    mino=s[i]-'0';
    
}
sufmin[i]=mino;
}
// cout<<mino<<" "<<ind<<endl;
vector<ll> ans;
// cout<<sufmin<<endl;
FOR(j,n-1){
    // cout<<s[j]-'0'<<endl;
    if(s[j]-'0'>sufmin[j+1]){
        ans.pb(min(s[j]-'0'+1,9));
        
    }
    else{
        // cout<<s[j]-'0'+1<<"debug"<<endl;
        ans.pb(s[j]-'0');
    }
    // cout<<ans<<endl;
}
ans.pb(s[n-1]-'0');
// cout<<ans<<endl;
sort(all(ans));
// cout<<ans<<endl;
FOR(i,n){
    cout<<ans[i];
}
cout<<endl;
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