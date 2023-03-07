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
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void solve() {
ll n,p;
cin>>n>>p;
ll l[n];
// string s;
// cin>>s;
for(ll i=0;i< n;i++){
cin>>l[i];
}
// ll flag=0;
ll ans1=0;
ll ans2=0;
ll temp=0;
ll mul=0;
ll ind=0;
for (ll i = 1; i < n; i++)
{
    /* code */
if (l[i]<l[i-1]){
// flag=1;
ind=i;
temp=l[i-1];
mul=1;
// ans+=(pow(p,(n-i-1))*(temp-l[i]));
break;
    }

}
ll num=pow(10,9)+7;
for (ll i = 0; i < n-ind; i++)
{
    // cout<<ans<<" "<<mul<<" "<<temp<<" "<<temp-l[n-i-1]<<endl;
    ans1+=(mul*(temp-l[n-i-1]));
    // ans2+=(mul*l[n-i-1]);
mul*=p;
// mul%=num;
// ans1%=num;
// ans2%=num;
    /* code */
    // cout<<ans<<endl;
}

cout<<(ans1)%(num)<<endl;
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