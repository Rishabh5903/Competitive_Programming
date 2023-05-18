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
ll n;
cin>>n;
ll l[n];
for(ll i=0;i< n;i++){
cin>>l[i];
}
if (n==1){
    cout<<1<<endl;
}
else if(n==2){
    if (l[0]==l[1]){
        cout<<1<<endl;
    }
    else
    cout<<2<<endl;
}
else{
    vector<ll> v;
    v.push_back(l[0]);
for (ll i = 0; i < n-1; i++)
{
    /* code */
    if( l[i+1]!=l[i]){
        v.push_back(l[i+1]);
    }
}
// cout<<v<<endl;
ll ans=1;
if (sza(v)>1){
ans=2;
for (ll i = 1; i < sza(v)-1; i++)
{
    /* code */
    if( (v[i-1]<v[i] && v[i] >v[i+1]) || (v[i-1]>v[i] && v[i]<v[i+1])){
        ans+=1;
        // cout<<"debug"<<i<<endl;
    }
}}
cout<<ans<<endl;
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