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
ll n,k;
cin>>n>>k;
vector<ll> l(n);
FOR(i,n){
    cin>>l[i];
}
sort(all(l));
// cout<<l<<endl;
for(ll i=1;i< n;i++){
    l[i]=l[i-1]+l[i];
}
ll mino=INF;
FOR(i,k+1){
    ll a =i;
    ll b=k-i;
    if (a==0){
        mino=min(mino,l[n-1]-l[n-b-1]);
        // cout<<l[n-1]<<" "<<l[n-b-1]<<" "<<l[n-1]-l[n-b-1]<<endl;
        // cout<<mino<<endl;
    }
    else if (b==0){
        mino=min(mino,l[2*a-1]);
    }
    else{
        mino=min(mino,l[2*a-1]+l[n-1]-l[n-b-1]);
        // cout<<a<<b<<endl;
        // cout<<l[2*a-1]+l[n-1]-l[n-b-1]<<" "<<mino<<endl;;
        // cout<<l[n-1]-mino;
    }
}
// cout<<l<<endl;
// cout<<mino<<endl;
cout<<l[n-1]-mino<<endl;
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