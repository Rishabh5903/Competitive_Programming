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
int n,t;
cin>>n>>t;
int a[n],b[n];
for(int i=0;i< n;i++){
cin>>a[i];
}
for(int i=0;i< n;i++){
cin>>b[i];
}
vector<pair<int,int>> v;
FOR(i,n){
    // pair<int,int> p;
    // p.first=b[i];
    // p.second=i;
    // cout<<p.first<<p.second<<p<<endl;
    v.push_back( pair (b[i],i));
}
sort(all(v));
int f=0;
// cout<<v<<endl;
FOR(i,n){
    if(a[v[n-1-i].second]+v[n-1-i].second<=t){
    cout<<v[n-1-i].second+1<<endl;
    f=1;
    break;}
}
if(!f)
cout<<-1<<endl;
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