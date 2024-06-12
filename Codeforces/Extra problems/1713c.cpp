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
ll n;
cin>>n;
vector<ll> ans(n);
for (ll i = 0; i < n; i++)
{
    /* code */
    ans[i]=-1;
}

ll num=pow(ceil(sqrt(n-1)),2);
for (ll i = n-1; i >= 0; i--)
{
    /* code */
    if (num-i<=n-1 && ans[i]!=-1 && ans[num-i]!=-1){
        continue;
    }
    if(num-i<=n-1 && ans[i]==-1 && ans[num-i]==-1){
        ans[i]=num-i;
        ans[num-i]=i;
    }
    else{
        // while (num-i<=n-1 && (ans[i]!=-1 || ans[num-i]!=-1))
        // {
        num=pow(ceil(sqrt(i)),2);
        // }
        
        // num=pow((sqrt(num)-1),2);
        ans[i]=num-i;
        ans[num-i]=i;
    }
    // cout<<ans<<i<<endl;
}
for (ll i = 0; i < n; i++)
{
    /* code */
    cout<<ans[i]<<" ";
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