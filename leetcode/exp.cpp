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
    int solve(int i,int j,string& s, int& val){
		cout<<i<<" "<<j<<endl;
        if(i>j) return 0;
        map<char,vector<int>> ind;
        for(int k=i;k<=j;k++){
            ind[s[k]].push_back(k);
        }
        vector<int> temp;
        int f=1;
        for(auto k:ind){
            if(k.second.size()<val){f=0;
                for(int p:k.second)
                temp.push_back(p);}
        }
		cout<<temp<<endl;
        if(f) return j-i+1;
        sort(temp.begin(),temp.end());
        int ans=0;
        if(temp.size()) ans=solve(0,temp[0]-1,s,val);
        for(int k=1;k<temp.size();k++){
            ans=max(ans,solve(temp[k-1]+1,temp[k]-1,s,val));
        }
        if(temp.size())ans=max(ans,solve(temp.back()+1,temp.size()-1,s,val));
        return ans;
    }
    int longestSubstring(string s, int val) {
        return solve(0,s.size()-1,s,val);
    }
void solvee() {
string s="ababacb";int val=3;
cout<<longestSubstring(s,val)<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int n = 1;
cin >> n;
for (int t = 1; t <= n; t++) {
// cout << 'Case #' << t << ': ';
solvee();
}
}