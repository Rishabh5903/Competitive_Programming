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
ll n,k;
cin>>n>>k;
// ll l[n];
string a,b;
cin>>a>>b;
vector<char> v1,v2;
ll flag=1;
for (ll i = 0; i < n; i++)
{
    /* code */
    if (i+k>n-1 && i-k<0){
        if(a[i]!=b[i]){
        flag=0;
        break;}
    }
    else{
        v1.push_back(a[i]);
        v2.push_back(b[i]);
    }
}
if(!flag) cout<<"NO"<<endl;
else{
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if (v1==v2){
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;
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