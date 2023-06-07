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
ll maxm(ll n,vector<ll> v){
sort(all(v));
return v[n-1];
}
ll minm(ll n,vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
string S1,S2;ll t;ll q;vector<vector<ll>> v={};make_heap(all(v));map<ll,ll> chk;ll cnt=0;
cin>>S1>>S2>>t>>q;
vector<char> a(S1.size()),b(S2.size());
FOR(i,0,S1.size()){
    a[i]=S1[i];b[i]=S2[i];if(a[i]!=b[i]){cnt++;chk[i]=1;}
}
for(ll i=0;i< q;i++){
    while(v.size()>0 && v.front()[0]>=i){pop_heap(all(v));v.pop_back();cnt--;}
    ll temp;cin>>temp;
if(temp==1){ll p;
    cin>>p;vector<ll> V={t+i,p-1};v.push_back(V);push_heap(all(v));if(chk[p-1])cnt--}
else if(temp==2){ll s1,s2,p1,p2;
    cin>>s1>>p1>>s2>>p2;
if(s1==s2){if(s1==1)swap(a[p1-1],a[p2-1]);else swap(b[p1-1],b[p2-1]);

}
else{
    if(s1==1)swap(a[p1-1],b[p2-1]);
    else swap(a[p2-1],b[p1-1]);
}
}
else {
if(cnt)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
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