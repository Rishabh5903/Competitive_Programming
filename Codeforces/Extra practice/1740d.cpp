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
void solve(int a,int b) {
ll n,m,k;
cin>>n>>m>>k;
vector<ll> l(k);
for(ll i=0;i< k;i++){
cin>>l[i];
}
ll cap=m*n-4;
ll nxt=k;
vector<ll> v={};
make_heap(all(v));
// ll temp=0;
ll f=1;
FOR(i,0,k){
    if(sza(v)>0){
        while (sza(v)>0 && v.front()==nxt)
        {
            pop_heap(all(v));
            v.pop_back();
            cap+=1;
            nxt-=1;
            // cout<<"debug"<<endl;
        }
    }
    if(l[i]==nxt){
        nxt-=1;
    }
    else{
        v.push_back(l[i]);
        push_heap(all(v));
        cap-=1;
    }
    if (cap<0){
        f=0;
        break;
    }
    // cout<<v<<endl;
}
// if(a==3384 && b==3){
//     cout<<n<<" "<<m<<" "<<k<<" "<<l<<endl;
// }
if(f)
cout<<"YA"<<endl;
else
cout<<"TIDAK"<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve(n,t);
}
}