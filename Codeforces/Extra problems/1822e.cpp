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
string s;
cin>>s;
if(n%2==1){
    cout<<-1<<endl;
}
else{
    map<char,int> mp;
    map<char,int> fr;
    int maxfr=0;
    ll f=0;
    int cnt=0;
    int maxo=0;
    FOR(i,n/2){
        if(s[i]!=s[0] || s[n-1-i]!=s[0])
        f=1;
        if(s[i]==s[n-1-i]){
        cnt+=1;
        if(!fr[s[i]])
        fr[s[i]]=1;
        else if(fr[s[i]])
        fr[s[i]]+=1;
        maxo=max(maxo,fr[s[i]]);
        }
        if(!mp[s[i]])
        mp[s[i]]=1;
        else if(mp[s[i]])
        mp[s[i]]+=1;
        maxfr=max(maxfr,mp[s[i]]);
        if(!mp[s[n-1-i]])
        mp[s[n-1-i]]=1;
        else if(mp[s[n-1-i]])
        mp[s[n-1-i]]+=1;
        maxfr=max(maxfr,mp[s[n-1-i]]);


    }
    if(!f)
    cout<<-1<<endl;
    else if(maxfr>n/2)
    cout<<-1<<endl;
    else{
        cout<<max((cnt+1)/2,maxo)<<endl;
    }
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