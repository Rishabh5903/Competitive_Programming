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
map <vector<ll>,ll> mp;
vector<vector<ll>> m;
// ll l[n];
// string s;
// cin>>s;

for(ll i=0;i< n;i++){
    vector<ll> l1(n-1);
    for (ll j = 0; j < n-1; j++)
    {ll temp;
    cin>>temp;
l1[j]=temp;

        /* code */
    }
    m.push_back(l1);

}
// cout<<m;
vector<ll> ans(n);
for (ll i = 0; i < n-1; i++)

{ll f1=0,f2=0;
ll num1,num2;
    for (ll j = 0; j < n; j++)
{
    /* code */ll temp;
    temp=m[j][i];
if(j==0){
    num1=temp;
    // f1+=1;
}
if(temp!=num1){
    num2=temp;
    f2+=1;
}
else
f1+=1;


}
// cout<<f1<<f2<<num1<<num2<<endl;
if (f2>f1){
    ll t1=f1;
    f1=f2;
    f2=t1;
    t1=num1;
    num1=num2;
    num2=t1;
    // num1,num2=num2,num1;
}
// cout<<f1<<f2<<num1<<num2<<endl;
if(!ans[i]){
    ans[i]=num1;
}
if(ans[i]==num1)
    ans[i+1]=num2;
else 
ans[i+1]=num1;
 /* code */
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