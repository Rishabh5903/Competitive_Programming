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
vector<ll> l(n);
for(ll i=0;i< n;i++){
cin>>l[i];
}
sort(all(l));
if(l[0]==l[n-1]){
cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
ll a=0;
ll b=n-1;
ll sum=l[0];
ll maxo=l[n-1]-l[0];
if(sum<0)
a+=1;
else
b-=1;
ll cnt=1;
cout<<l[0]<<" ";
ll prev=l[0];
while (cnt<n)
{
    // if(abs(sum+l[a])<=abs(sum+l[b])){
    //     cout<<l[a]<<" ";
    //     sum+=l[a];
    //     a+=1;
    // }
    // else {
    //     cout<<l[b]<<" ";
    //     sum+=l[b];
    //     b-=1;
    // }
    if(sum<=0){
        if(abs(sum+l[a])<maxo){
            cout<<l[a]<<" ";
            sum+=l[a];
            prev=l[a];
            a+=1;
        }
        else{
            cout<<l[b]<<" ";
            sum+=l[b];
            prev=l[b];
            b-=1;
        }
    }
    else{
        if(abs(sum+l[b])<maxo){
                        cout<<l[b]<<" ";
            sum+=l[b];
            prev=l[b];
            b-=1;

        }
        else{
            cout<<l[a]<<" ";
            sum+=l[a];
            prev=l[a];
            a+=1;
        }
    }
    cnt+=1;
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