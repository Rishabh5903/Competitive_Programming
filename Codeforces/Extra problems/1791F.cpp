#include <bits/stdc++.h>
#include<sstream> 
#include <string>
#include <cstdlib>
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
ll n,q;
cin>>n>>q;
ll l[n];
// string s;
set<int> s;
// cin>>s;
for(ll i=0;i< n;i++){
cin>>l[i];
if(l[i]>9){
    s.insert(i);
}
}
for (ll i = 0; i < q; i++)
{
    /* code */
    ll val;
    cin>>val;
    if (val==1){
        ll g,h;
        cin>>g>>h;--g,--h;

        ll lst=g;
        while (!s.empty()){
            auto ind=s.lower_bound(lst);
            if(ind==s.end() || *ind>h) break;
ll num=l[*ind];
           ll ans=0;
while(num>0)    
{    
    ll m;
m=num%10;    
ans=ans+m;    
num=num/10;    
} 
ll temp=*ind;
l[*ind]=ans;

// s.erase(ind);
if(!(l[temp]>9)) s.erase(temp);
lst=temp+1;
        }
}
    else{
        ll g;
        cin>>g;
        cout<<l[g-1]<<endl;
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