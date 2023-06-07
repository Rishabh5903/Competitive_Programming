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
cin>>n;
ll l[2*n];
for(ll i=0;i< 2*n;i++){
cin>>l[i];
}
if(n==1){
    cout<<abs(l[1]-l[0])<<endl;
}
else if(n==2){
    ll t1=0;
    ll t2=0;
    FOR(i,0,4){
        t1+=abs(l[i]-2);
        t2+=abs(l[i]+1);
    }
    ll prev=t2;
    // cout<<t1<<" "<<t2<<endl;
    FOR(i,0,4){
        ll temp=prev-abs(l[i]+1)+abs(l[i]-2);
        if(temp<prev){
            t2=temp;
        }
        // cout<<t2<<endl;
    }
    if(t1<=t2)
    cout<<t1<<endl;
    else
    cout<<t2<<endl;
}
else{
    ll t2=0;
    FOR(i,0,2*n){
        t2+=abs(l[i]+1);
    }
    ll prev=t2;
    FOR(i,0,2*n){
        ll temp=prev-abs(l[i]+1)+abs(l[i]-n);
        if(temp<prev){
            t2=temp;
        }
    }
    cout<<t2<<endl;
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