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
int n,m;
cin>>n>>m;
vector<ll> l(n);
for(ll i=0;i< n;i++){
cin>>l[i];
}
map<ll,ll> mp;
int c1=0,c2=0,c3=0;
vector<ll> v;
FOR(i,n){
    if (l[i]==-1)
    c1+=1;
    else if(l[i]==-2)
    c2+=1;
    else{
        if(!mp[l[i]])
        {mp[l[i]]=1;
        c3+=1;
        v.push_back(l[i]);
        }
    }
}
sort(all(v));
int L=0,R=0,M=0;
if(sza(v)>0){
L=v[0]-1;
R=m-v[sza(v)-1];
FOR(i,sza(v)-1){
    M+=v[i+1]-v[i];
}
}
// cout<<L<<" "<<M<<" "<<R<<" "<<c1<<" "<<c2<<" "<<c3<<endl;
if(R+M>=c2){
    if(L+max(M-max(c2-R,0),0)>=c1){
        cout<<min(c1+c2+c3,m)<<endl;
    }
    else
    cout<<min(max(min(c1,L+M+R)+c3,min(c2,L+M+R)+c3),m)<<endl;
}
else
cout<<min(max(min(c1,L+M+R)+c3,min(c2,L+M+R)+c3),m)<<endl;
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