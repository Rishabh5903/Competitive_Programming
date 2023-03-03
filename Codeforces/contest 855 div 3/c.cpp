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
#define pb push_back
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void solve(int t) {
ll n;
cin>>n;
ll cnt=0;
vector<ll> l(n);
// string s;
// cin>>s;
ll ans=0;
for(ll i=0;i< n;i++){
    // ll temp;
    cin>>l[i];
    if (l[i]==0){
        cnt+=1;
    }


}
if(t==670){
    cout<<l<<endl;
}
vector<ll> temp;
ll i=0;
ll c=0;
while (i<n)
{
    /* code */
        if (l[i]!=0){
temp.push_back(l[i]);
i+=1;
    }
    else{
        c+=1;
        if (c==cnt){
            break;
        }

i+=1;
    }
}
sort(temp.begin(),temp.end());
        if (size(temp)>0){
            // sort(temp.begin(),temp.end());
            while (c>0  && size(temp)>0)
            {
                /* code */ans+=temp[size(temp)-1];
            temp.pop_back();
            c-=1;
            }

            
        }
cout<<ans<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solve(t);
}
}