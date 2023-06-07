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
    bool canJump(vector<int>& nums) {
        int n=(int)nums.size();
        vector<vector<int>> v={};
        int f=0;

            if (nums[0]>=n-1){
                f=1;
// cout<<"debug"<<endl;
            }
            else{
                int prev=1;
                int prev2=nums[0];
                make_heap(v.begin(),v.end());
                while(prev!=prev2+1 && prev<n-1){
                for(int j=prev;j<prev2+1;j++){
                    vector<int> temp={nums[j]+j,nums[j]};
                    v.push_back(temp);
                    push_heap(v.begin(),v.end());
                }
                prev=prev2+1;
                // cout<<v<<endl;
                // push_heap(v.begin(),v.end());
                // cout<<v<<endl;
                pop_heap(v.begin(),v.end());
                vector<int> temp=v[(int)v.size()-1];
                v.pop_back();
                prev2=temp[0];
                // cout<<temp<<endl;
                if(temp[0]>=n-1){
                    // cout<<"debug"<<endl;
                    f=1;
                    break;
                }}

            }
                if(f)
                return 1;
                else
                return 0;
        }
void solve() {
// int n;
vector<int> l(12);
for(ll i=0;i< 12;i++){
cin>>l[i];
}
cout<<canJump(l)<<endl;
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