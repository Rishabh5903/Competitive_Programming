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
}

bool isAllZeros(const string &s) {
    // Check if all characters in the string are '0'
    for (char c : s) {
        if (c != '0') {
            return false;
        }
    }
    return true;
}

bool isPossible(const string &s, int k) {
    cout<<k<<endl;
    int n = s.size();
    vector<char> l(n);
    FOR(i,0,n)l[i]=s[i];
    ll ind=0;ll i=0;
    while(i<n){
        // ce(i);
        if(l[i]=='0'){int f=1;
        if(i+k<n)
        {FOR(j,i,i+k){
            if(l[j]=='0'){l[j]='1';}else {l[j]='0';if(f){ind=j;f=0;}};
        }
        if(!f)
        i=ind;else i+=k;}
        else break;
        }
        else i++;
    }
    if(find(all(l),'0')==l.end())return true;else return false;

}

int findMaxK(const string &s) {
    if (isAllZeros(s)) return s.size(); // If all characters are '0', return n

    int low = 1, high = s.size(), mid, ans = 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (isPossible(s, mid)) {
            ans = mid; // If it's possible with this k, try to find a larger k
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int t, n;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> n >> s; // Read the string length and the string itself for each test case
        int f=1;
        for(char i:s)if(i=='1'){f=0;break;}
        if(f){cout<<n<<endl;}
        else
        cout << findMaxK(s) << "\n"; // Output the maximum k for each test case
    }
    return 0;
}
