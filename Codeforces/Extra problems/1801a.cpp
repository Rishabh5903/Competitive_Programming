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
ll n,m;
cin>>n>>m;
// vector<vector<ll>> v(n,vector<ll>(m));
// cout<<v<<endl;
cout<<m*n<<endl;
for(ll i=0;i< n;i++){
    FOR(j,0,m){
        if(i%2==0){
            if(j%2==0)
            cout<<((i/2)*((256+1)/2)+(j/2))*4<<" ";
            else
            cout<<((i/2)*((256+1)/2)+(j/2))*4+1<<" ";
        }
        else{
            if(j%2==0)
            cout<<((i/2)*((256+1)/2)+(j/2))*4+2<<" ";
            else
            cout<<((i/2)*((256+1)/2)+(j/2))*4+3<<" ";
 
        }
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
// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// const int SZ = 256;

// int v[SZ][SZ];

// void Solve(){
//     int n, m;
//     cin >> n >> m;

//     cout << n * m << '\n';

//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < m; j++)
//             cout << v[i][j] << " \n"[j + 1 == m];
// }

// signed main(){
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     {
//         int now = 0;
//         int n = 256;
//         int m = 256;

//         for(int i = 0; i < n; i += 2)
//             for(int j = 0; j < m; j += 2){
//                 v[i][j] = now;
//                 v[i][j + 1] = now + 1;
//                 v[i + 1][j] = now + 2;
//                 v[i + 1][j + 1] = now + 3;
//                 now += 4;
//             }
//     }

//     int num_test = 1;
//     cin >> num_test;

//     for(int i = 1; i <= num_test; i++){
//         Solve();
//     }
// }