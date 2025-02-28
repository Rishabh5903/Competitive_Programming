#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<ll> a(n);
        ll maxA = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            maxA = max(maxA, a[i]);
        }
        auto feasible = [&](ll X) -> bool{
            int ops = 0, i = 0;
            while(i < n){
                if(a[i] > X && s[i]=='R'){ i++; continue; }
                int j = i;
                bool req = false;
                while(j < n && !(a[j] > X && s[j]=='R')){
                    if(a[j] > X && s[j]=='B') req = true;
                    j++;
                }
                if(req) ops++;
                i = j;
            }
            return ops <= k;
        };
        ll lo = 0, hi = maxA, ans = hi;
        while(lo <= hi){
            ll mid = (lo + hi) / 2;
            if(feasible(mid)){
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
