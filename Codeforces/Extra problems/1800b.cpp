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
string s;
cin>>s;
map<char,vector<ll>> m;
for (ll i = 0; i < n; i++)

{
    /* code */
    char it=s[i];
    if(m.find(tolower(it))==m.end()){
        vector<ll> temp={0,0};
        m[tolower(it)]=temp;

    }
    if(islower(it)){
        m[it][0]+=1;
    }
    else{
        // cout<<m<<tolower(it)<<endl;
        m[tolower(it)][1]+=1;
    }
}
ll ans=0;
// vector<char> l={ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
for (auto& it: m)
{   
    /* code */
    // cout<<m[it]<<endl;
    // vector<ll> it=m[i];
    // vector<ll> it=m[i];
    if(m.find(it)!=m.end()){
    ans+=min(m[it][0],m[it][1]);
    if (k>0){
        if((max(m[it][0],m[it][1])-min(m[it][0],m[it][1]))/2<=k){
        ans+=(max(m[it][0],m[it][1])-min(m[it][0],m[it][1]))/2;
        k-=(max(m[it][0],m[it][1])-min(m[it][0],m[it][1]))/2;
        }
        else{
            ans+=k;
            k=0;
        }
    }}
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