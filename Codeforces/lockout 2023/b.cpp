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
ll n,a,b;
cin>>n>>a>>b;
// cin>>a;/
// cin>>b;
// cout<<n<<a<<b;
// ll l[n];
// string s;
// cin>>s;
// for(ll i=0;i< n;i++){
// cin>>l[i];
for (ll i =2; i < n; i++)
{
    /* code */
    if(n%i==1){
        if(a==b){
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}

}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;

// cout << 'Case #' << t << ': ';
solve();

}