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
#define ll long long int
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
ll n,q;
cin>>n>>q;
ll l[n];
for(ll i=0;i< n;i++){
cin>>l[i];
}
vector<tuple<ll,ll,ll>> v(q);
for(ll i=0;i< q;i++){
     
    ll j,k;
cin>>j>>k;
tuple<ll,ll,ll> t=(k,j,i);
v[i]=t;
}
sort(all(v));
ll arr[n+1]={0};
ll prev=l[0];
ll ans[q];
ll ind=0;
FOR(i,0,n){
    if(ind>q-1)
    break;
    prev=max(prev,l[i+1]);
    arr[prev]+=1;
    if(i==get<0>(v[ind])-1){
    ans[get<2>(v[ind])]=arr[get<1>(v[ind])];
    ind+=1;
    }
}
FOR(i,ind,q){
        arr[prev]+=1;
        ans[get<2>(v[ind])]=arr[get<1>(v[ind])];
}
FOR(i,0,q){
    cout<<ans[i]<<endl;
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