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
ll a[n],b[n];
vector<ll> minl,maxl;
bool flag=true,flag2=true;
// string s;
// cin>>s;
ll mino=INF;
ll maxo=0;
for(ll i=0;i< n;i++){
cin>>a[i];
}
ll ind=0;
ll ind1=0;
for(ll i=0;i< n;i++){
cin>>b[i];
if(i==0 || !flag){
mino=b[i];
}
while (ind<n)
{ if(a[ind]<=mino){
    /* code */
    flag=true;
    minl.push_back(mino);
    ind+=1;}
    else{
        flag=false;
        break;
    }
}


}
for (ll i = 0; i < n; i++)
{
   if (i==0 || !flag2){
    maxo=b[i];
}
while (ind1<n)
{
    if (a[ind1]>maxo){
maxl.push_back(b[ind1-1]);
flag2=false;
break;
    }
    else{
        ind1+=1;
flag2=true;
    }
}
}

for (ll i = size(maxl); i < n; i++)
{
    /* code */
    maxl.push_back(b[n-1]);
}

// flag=true;
// ind=n-1;
// for(ll i=0;i< n;i++){
// // cin>>b[i];
// if(i==0 || !flag){
// maxo=b[n-i-1];
// }
// while (ind<n)
// { if(a[ind]<=mino){
//     /* code */
//     flag=true;
//     minl.push_back(mino);
//     ind+=1;}
//     else{
//         flag=false;
//         break;
//     }
// }
// }
// cout<<maxl<<endl;
for (ll i = 0; i < n; i++)
{
    /* code */
    cout<<minl[i]-a[i]<<" ";
}
cout<<endl;
for (ll i = 0; i < n; i++)
{
    /* code */
    cout<<maxl[i]-a[i]<<" ";
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