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
#define cinv(v) for( long long int i = 0; i<v.size();i++)cin>>v[i];
#define coutv(v) for( long long int i = 0; i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
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
}struct ComparePairs {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
        // First compare the first elements
        if (a.first != b.first) return a.first >= b.first;
        // If the first elements are equal, compare the second elements
        return a.second >= b.second;
    }
};
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int> f(n,0);int maxo=0;
        priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, ComparePairs> pq;
        for(int i=0;i<n;i++){
            pq.push({0,i});
        }
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<meetings.size();i++){
            pair<int, int>temp=pq.top();pq.pop();
            // ce(temp.first);ce(temp.second);
            f[temp.second]++;temp.first=max(temp.first,meetings[i][0])+meetings[i][1]-meetings[i][0];pq.push(temp);maxo=max(maxo,f[temp.second]);
        }
        // ce(f);
        // return maxo;
        for(int i=0;i<n;i++)if(f[i]==maxo)return i;return 0;
    }
void solve() {
int n = 2;vvi meetings;
meetings.pb({0,10}) ;
meetings.pb({1,5}) ;
meetings.pb({2,7}) ;
meetings.pb({3,4}) ;
//  {{0,10},{1,5},{2,7},{3,4}};
ce(mostBooked(n,meetings));
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