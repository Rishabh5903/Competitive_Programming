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
const ll INF = 1e20;
const ld EPS = 1e-20;
void solve() {
ll n,m;
cin>>n>>m;
vector<ll> l(n*m);
for(ll i=0;i< n*m;i++){
cin>>l[i];
}
sort(all(l));
// cout<<l<<endl;
ll ans=0;
ans+=((m*n-min(m,n))*(l[m*n-1]-l[0]));
ll a=0,b=0;
a=(l[m*n-2]-l[0])*(min(m,n)-1);
b=(l[m*n-1]-l[1])*(min(m,n)-1);
// FOR(i,min(m,n)-1){
//     a+=l[m*n-2-i]-l[0];
// }
// FOR(i,min(m,n)-1){
//     b+=l[m*n-1]-l[i+1];
// }
ans+=max(a,b);
cout<<ans<<endl;
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