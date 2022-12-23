#include <bits/stdc++.h>
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
    string s1,s2;
    cin>>s1>>s2;
    int n1=0,m1=0,n2=0,m2=0;
    for (int i = 0; i < s1.length(); i++)
    { if (s1[i]=='0')
    m1+=1;
    else if (s1[i]=='1')
    n1+=1;
    if (s2[i]=='0')
    m2+=1;
    else if (s2[i]=='1')
    n2+=1;
        /* code */
    }
    // cout<<min(m1,n2)+min(m2,n1)<<n1+m1-min(m1,n2)-min(m2,n1)<<endl;
    cout<<string(min(m1,n2)+min(m2,n1),'1')+string(n1+m1-min(m1,n2)-min(m2,n1),'0')<<endl;
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