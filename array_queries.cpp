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
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for( long long int i = a; i<b;i++)
#define pb push_back
#define ce(x) cout<<x<<endl
int modmul(int a,int b,int m){ a %= m;b %= m; return (a * b) % m;}
int modadd(int a,int b,int m){ a %= m;b %= m; return (a + b) % m;}
int modsub(int a,int b,int m){ a %= m;b %= m; return (a - b + m) % m;}
int gcd(int a, int b){ if(b == 0) return a; return gcd(b, a % b);}
int expo(int a,int n,int md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
template <typename T> bool revsort(T a, T b){return a > b;}
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e20;
const ld EPS = 1e-20;
ll maxm(vector<ll> v){
sort(all(v));
return v[v.size()-1];
}
ll minm(vector<ll> v){
sort(all(v));
return v[0];
}
void solve() {
int q;
cin>>q;
for(int p=0;p< q;p++){
int t;cin>>t;
if(t==1){
    int n,k;cin>>n>>k;vector<int> arr(n);
    for (int j = 0; j < n; j++)
    {
        cin>>arr[j];
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    for (int j = n-k; j < n; j++)
    {
        ans+=arr[j];
    }
    cout<<ans<<endl;
}
else if(t==2){
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++)cin>>a[i];
    for (int i = 0; i < m; i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int> ans;
    int i1=0,i2=0;
    while(i1<n && i2<m){
        if(a[i1]<=b[i2]){ans.push_back(a[i1]);i1++;}
        else{ans.push_back(b[i2]);i2++;}
    }
    while(i1<n){
        ans.push_back(a[i1]);i1++;
    }
    while(i2<m){
        ans.push_back(b[i2]);i2++;
    }
    for (int i = 0; i < n+m; i++)
    {
    cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
else{
    int n;cin>>n;int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>> m(n,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        int num=arr[i];int ind=n-1;
        while(num){
            m[ind][i]=num%2;num/=2;ind--;
        }
    }
    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j < n; j++)
       {
         cout<<m[i][j]<< " ";
       }
       cout<<endl;
       
    }
    
    
}
// cin>>l[i];
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