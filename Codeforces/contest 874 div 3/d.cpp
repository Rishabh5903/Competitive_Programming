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
ll maxi=0;
for(ll i=0;i< n;i++){
cin>>l[i];
if(l[i]>l[maxi]){
    maxi=i;
}
}
if (maxi==0){
    ll ind=1;
    for (ll i = 1; i < n; i++)
    {if(l[i]>l[ind]){
        ind=i;
    }
        /* code */
    }
    for (ll i = ind; i < n; i++)
    {
        /* code */
        cout<<l[i]<<" ";
    }
    if(ind==n-1){
    for (ll i = 0; i < ind; i++)
    {
        /* code */
        cout<<l[i]<<" ";
    } 
    }
    else{
    cout<<l[ind-1]<<" ";
    for (ll i = 0; i < ind-1; i++)
    {
        /* code */
        cout<<l[i]<<" ";
    }}
    cout<<endl;
    
    
}
else{
    for (ll i = maxi; i < n; i++)
    {
        /* code */
        cout<<l[i]<<" ";
    }
    ll i;
    if(maxi!=n-1){
    cout<<l[maxi-1]<<" ";
     i=maxi-2;}
    else{
         i=maxi-1;
    }
    while (i>=0 && l[i]>l[0])
    {
        /* code */
        cout<<l[i]<<" ";
        i-=1;
    }
    for (ll j = 0; j < i+1; j++)
    {
        cout<<l[j]<<" ";
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