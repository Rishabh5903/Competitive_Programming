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
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
void solve() {
ll n;
cin>>n;ll cnt=0;ll temp=0;ll f=1;ll o=0;
ll l[n];
vector<ll> v;
for(ll i=0;i< n;i++){
cin>>l[i];if(l[i]==0)cnt+=1;
}
FOR(i,0,n){
    if(l[i]==0){temp+=1;
    // if(cnt-temp>=1)
    // v.push_back(o);
    }
    else{
        o+=1;if((cnt-temp)==0){f=0;break;}
    }
}
if(!f)
cout<<"NO"<<endl;
else{
    cout<<"YES"<<endl;
    if(n==1)cout<<0<<endl;
    else{
    // reverse(all(v));
    // FOR(i,0,o){cout<<0<<" ";}cout<<o<<" ";
    // for(ll i:v){cout<<i<<" ";}
    ll i=n-1;ll cnt=0;
    while(i >=1)
    {
       if(l[i]==0){
        if(l[i-1]==0)
        cout<<0<<" ";
        else{
        cnt+=1;cout<<0<<" ";}

       }
       else{
        if(l[i-1]==1){cnt+=1;cout<<0<<" ";}
        else{ cout<<cnt<<" ";cnt=0;}
       }
       i--;
    }
    if(l[0]==0)cout<<0<<" ";
    else cout<<cnt<<" ";
    }
    cout<<endl;
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