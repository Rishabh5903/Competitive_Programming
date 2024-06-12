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
ll n;
cin>>n;
ll l[n];
for(ll i=0;i< n;i++){
cin>>l[i];
}
ll ans=0;
if (n%2==1){
    FOR(j,(n-1)/2){
        if (l[2*j+1]<=max(l[2*j],l[2*j+2]))
        ans+=max(l[2*j],l[2*j+2])+1-l[2*j+1];
    }
    // cout<<l[2]+2*l[4]+3-l[1]-l[3]-l[5]<<endl;
}
else{
    vector<ll> prev((n-1)/2);
    vector<ll> suf((n-1)/2);
    ll pre=0;
    ll suff=0;
    FOR(j,(n-1)/2){
        if (l[2*j+1]<=max(l[2*j],l[2*j+2])){
        prev[j]=pre+max(l[2*j],l[2*j+2])+1-l[2*j+1];
        pre=prev[j];}
        else{
            prev[j]=pre;
        }
        if (l[(n-2-2*j)]<=max(l[n-2-2*j-1],l[n-1-2*j])){
        suf[(n-2)/2-j-1]=suff+max(l[n-2-2*j-1],l[n-1-2*j])+1-l[n-2-2*j];
        suff=suf[(n-2)/2-j-1];}
        else{
            suf[(n-2)/2-j-1]=suff;
        }
    }
    ll mino=suf[0];
    // cout<<prev<<endl;
    // cout<<suf<<endl;
    FOR(j,(n-2)/2-1){
        mino=min(mino,prev[j]+suf[j+1]);
    }
    // cout<<"debug"<<mino<<endl;
    mino=min(mino,prev[(n-2)/2-1]);
    ans=mino;
}
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