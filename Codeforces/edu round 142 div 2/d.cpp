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
vector<ll> slicing(vector<ll>& arr,
                    ll X, ll Y)
{
 
    // Starting and Ending iterators
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;
 
    // To store the sliced vector
    vector<ll> result(Y - X + 1);
 
    // Copy vector using copy function()
    copy(start, end, result.begin());
 
    // Return the final sliced vector
    return result;
}
void solve() {
ll p,q;
cin>>p>>q;
set<vector<ll>> l;
// for (ll i = 0; i < 10; i++)
// {
//     /* code */
//     map<ll,ll> mp;
//     l[i]=mp;
// }

vector<vector<ll>> m(p);
// string s;
// cin>>s;
for(ll i=0;i< p;i++){
vector<ll> v;
vector<ll> v1(q);
for (ll j = 0; j < q; j++)
{
    /* code */
    ll temp;
    cin>>temp;
    v.push_back(temp);
    v1[temp-1]=j+1;
    // l.insert(v1);

}
for (ll i = 0; i < q; i++)
{
    /* code */
    l.insert(slicing(v1,0,i));
}


// cout<<v<<endl;
m[i]=v;
// cout<<m;
// cin>>l[i];
}
// cout<<l;
// cout<<m;
for (ll i = 0; i <p; i++)
{
    ll ans=0;
    for (ll j = 0; j < q; j++)
    {
        /* code */
        vector<ll> v=m[i];
        if (l[slicing(v,0,j) ]){
            ans+=1;
        }
        else break;
    }
    cout<<ans<<" ";
    /* code */
}
cout<<'\n';
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