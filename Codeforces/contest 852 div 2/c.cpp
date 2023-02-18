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
ll n;
cin>>n;
ll l1[n];
// string s;
// cin>>s;
for(ll i=0;i< n;i++){
cin>>l1[i];
}
ll mino=1;
ll maxo=n;
ll l=0;
ll r=n-1;
for (ll i = 0; i < n; i++)
{
    /* code */
       if(l==r){
        break;
    }
    else if(l1[l]==mino){
        l+=1;
        mino+=1;
    }
    else if(l1[l]==maxo){
        l+=1;
        maxo-=1;
    }
    else if(l1[r]==mino){
        r-=1;
        mino+=1;
    }
    else if(l1[r]==maxo){
        r-=1;
        maxo-=1;
    }

    else{
        break;
    }
}
if(l!=r){
    cout<<l+1<<" "<<r+1<<endl;
}
else{
    cout<<-1<<endl;
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