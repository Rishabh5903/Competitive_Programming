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
ll maxm(ll n,vector<ll> v){
sort(all(v));
return v[n-1];
}
ll minm(ll n,vector<ll> v){
sort(all(v));
return v[0];
}
    int countSquares(vector<vector<int>>& matrix) {int ans=0;int m=matrix.size();int n=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for (int j=1;j<matrix[0].size();j++){
                matrix[i][j]=matrix[i][j-1]+matrix[i][j];
            }
        }
        for(int i=1;i<matrix.size();i++){
            for (int j=0;j<matrix[0].size();j++){
                matrix[i][j]=matrix[i-1][j]+matrix[i][j];
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[0].size();j++){
                for(int k=1;k<=min(n-j,m-i);k++){int a=-1,b=-1,c=-1,d=-1;
                    a=matrix[i+k-1][j+k-1];
                if(j==0){d=0;b=0;}
                if(i==0){d=0;c=0;}
                if(b<0)b=matrix[i+k-1][j-1];if(c<0)c=matrix[i-1][j+k-1];if(d<0)d=matrix[i-1][j-1];
                    int val=a-b-c+d;
                    if(val==k*k){ans++;
                    cout<<i<<" "<<j<<" "<<k<<" "<<matrix<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                    }
                }
            }
        }
        return ans;
    }
void solve() {
    int m,n;
    cin>>m>>n;
vector<vector<int>> matrix(m,vector<int>(n));
FOR(i,0,m){
    FOR(j,0,n){
        cin>>matrix[i][j];
    }
}
cout<<countSquares(matrix)<<endl;
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