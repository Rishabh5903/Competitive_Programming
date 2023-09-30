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
ll maxm(vector<ll> v){
sort(all(v));
return v[v.size()-1];
}
ll minm(vector<ll> v){
sort(all(v));
return v[0];
}
    void solve(string a,string b,map<char,set<char>>& adj){
        if(a.size()<1 || b.size()<1)return;
        if(a[0]!=b[0]){
            adj[a[0]].insert(b[0]);
        }
        else{
            if(a.size()>=2 && b.size()>=2)
            solve(a.substr(1,a.size()-1),b.substr(1,b.size()-1),adj);
        }
    }
    string dfs(char a,int& K,string temp,map<char,set<char>>& adj){
        if(temp.size()==K-1)return temp+a;
        for(char i:adj[a]){
            // cout<<i<<endl;
            string s=dfs(i,K,temp+a,adj);
            if(s.size()==K)return s;
        }
        return "";
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        map<char,set<char>> adj;
        for(int i=1;i<N;i++){
            solve(dict[i-1],dict[i],adj);
        }
        // cout<<adj<<endl;
        // return "0";
        return dfs(dict[0][0],K,"",adj);
        // return "69";
        
    }
void solve() {
set<char> s;
s.insert('a');
s.insert('d');
s.insert('b');
s.insert('f');
s.insert('c');
cout<<s<<endl;
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