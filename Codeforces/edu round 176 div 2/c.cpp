#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<ll> X(m);
        for (int i = 0; i < m; i++){
            ll a;
            cin >> a;
            X[i] = min(a, (ll)n - 1);
        }
        
        sort(X.begin(), X.end());
        
        vector<ll> prefix(m + 1, 0);
        for (int i = 0; i < m; i++){
            prefix[i + 1] = prefix[i] + X[i];
        }
        
        ll ans = 0;
        for (int i = 0; i < m; i++){
            int lo = i + 1, hi = m;
            while(lo < hi){
                int mid = (lo + hi) / 2;
                if(X[i] + X[mid] >= n)
                    hi = mid;
                else
                    lo = mid + 1;
            }
            int pos = lo;
            if(pos < m){
                ll cnt = m - pos;
                ans += 2 * (cnt * (X[i] - n + 1) + (prefix[m] - prefix[pos]));
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}
