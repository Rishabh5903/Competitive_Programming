#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t;
    cin >> t;
 
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        
        vector<long long int> l(n);
        for (long long int i = 0; i < n; ++i) {
            cin >> l[i];
        }
 
        if (k >= 3) {
            cout << 0 << endl;
            continue;
        }
 
        sort(l.begin(), l.end());
 
        if (k == 1) {
            long long int ans = l[0];
            for (long long int i = 0; i < n - 1; ++i) {
                ans = min(ans, abs(l[i] - l[i + 1]));
            }
            cout << ans << endl;
            continue;
        } else {
            vector<pair<long long int, long long int>> pairs;
            
            for (long long int i = 0; i < n; ++i) {
                for (long long int j = i + 1; j < n; ++j) {
                    pairs.push_back({abs(l[i] - l[j]), 1});
                }
                pairs.push_back({l[i], 0});
            }
            sort(pairs.begin(), pairs.end());
            
            long long int ans = pairs[0].first;
            for (long long int i = 0; i < pairs.size() - 1; ++i) {
                ans = min(ans, pairs[i + 1].first);
                if (pairs[i].second + pairs[i + 1].second == 1) {
                    ans = min(ans, abs(pairs[i].first - pairs[i + 1].first));
                }
            }
            cout << ans << endl;
        }
    }
 
    return 0;
}