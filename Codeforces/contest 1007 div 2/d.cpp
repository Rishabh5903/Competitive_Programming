
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 

int n;                    
vector<int> baseF;          
vector<int> smallF;  
ll T;                      
int C_val;              
 
unordered_map<ll,int> memo;
 

int f_rec(ll x) {

    if(x <= n) return baseF[x];

    if(x < T) {
        return smallF[x - (n+1)];
    }

    if(x & 1LL) {
        return C_val;
    } else {
        if(memo.find(x) != memo.end())
            return memo[x];
        int res = C_val ^ f_rec(x/2);
        memo[x] = res;
        return res;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        memo.clear();
 
        ll l, r;
        cin >> n >> l >> r;

        vector<int> a(n+1);
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
 

        if(l <= n){
            cout << a[l] << "\n";
            continue;
        }

        baseF.resize(n+1);
        baseF[0] = 0;
        for (int i = 1; i <= n; i++){
            baseF[i] = baseF[i-1] ^ a[i];
        }

        ll k0 = (n + 2 + 1) / 2;  
        T = 2 * k0 + 1;

        int smallSize = (T > n+1) ? (int)(T - (n+1)) : 0;
        smallF.resize(smallSize);
        for (ll i = n+1; i < T; i++){

            int val = f_rec(i-1) ^ f_rec(i/2);
            smallF[i - (n+1)] = val;
        }

        C_val = f_rec(T - 1) ^ f_rec(T / 2);
        ll y = l / 2;
        int ans = f_rec(y);
        cout << ans << "\n";
    }
    return 0;
}
