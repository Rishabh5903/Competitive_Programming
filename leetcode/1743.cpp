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
    vector<int> restoreArray(vector<vector<int>>& l) {
        int n=l.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            if(mp.find(l[i][0])==mp.end()){
                mp[l[i][0]]={l[i][1]};
            }
            else{
                mp[l[i][0]].push_back(l[i][1]);
            }
            if(mp.find(l[i][1])==mp.end()){
                mp[l[i][1]]={l[i][0]};
            }
            else{
                mp[l[i][1]].push_back(l[i][0]);
            }
        }
        vector<int> ans(n+1);
        int f=1;
        for(auto& e:mp){
            int i=e.first;
            if(mp[i].size()==1){
                if(f){
                ans[0]=i;
                f=0;
                }
                else
                ans[n]=i;
            }
        }
        int ind=1;
        // cout<<ans;
        ans[1]=mp[ans[0]][0];
        // cout<<mp[-2]<<mp[4]<<mp[1]<<mp[-3]<<endl;
        while(ind<=n-2){
            // cout<<ind<<ans<<mp<<endl;
            if(mp[ans[ind]][0]!=ans[0] && mp[ans[ind]][0]!=ans[n]){
                ind+=1;
                ans[ind]=mp[ans[ind-1]][0];
            }
            else {
                ind+=1;
                ans[ind]=mp[ans[ind-1]][1];
            }
        }
        return ans;
    }
void solve() {
// ll n;
// cin>>n;
vector<vector<int>> l(3);
for(ll i=0;i< 3;i++){
    vector<int> temp(2);
cin>>temp[0]>>temp[1];
l[i]=temp;
}
cout<<restoreArray(l)<<endl;
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