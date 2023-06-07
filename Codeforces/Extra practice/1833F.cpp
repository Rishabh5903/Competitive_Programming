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
const ll MOD = 1000000007;
const ll INF = 1e20;
const ld EPS = 1e-20;
ll inv(ll i) {
    return i <= 1 ? i : MOD - (ll)(MOD/i) * inv(MOD % i) % MOD;
}
void solve(int a,int b) {
ll n,m;
cin>>n>>m;
ll l[n];vector<ll> v;map<ll,ll> mp;ll ans=0;
for(ll i=0;i< n;i++){
cin>>l[i]; mp[l[i]]++;if(mp[l[i]]==1)v.push_back(l[i]);
}
sort(all(v));
ll prod[sza(v)];
prod[0]=mp[v[0]];
FOR(i,1,sza(v)){
    prod[i]=(prod[i-1]*mp[v[i]])%MOD;
}
FOR(i,0,sza(v)-m+1){
            ll temp = 1;
            if(i>0) temp = prod[i-1];
            if(v[i+m-1]<m+v[i]){
                ans+=prod[i+m-1]*inv(temp)%MOD;
                ans%=MOD;
            }
}
// if(a==100 && b==1)
// cout<<v<<mp<<endl;
cout<<ans<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve(n,t);
}
}