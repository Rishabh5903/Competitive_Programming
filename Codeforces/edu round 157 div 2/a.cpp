#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> l(2*n);
        for (int i = 0; i < 2*n; i++) {
            cin >> l[i];
        }
        sort(l.begin(), l.end());
        // cout<<l[3]<<endl;
        vector<pair<int, int>> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = make_pair(l[i], l[2*n - i - 1]);
        }

        long long num = 0; // Use long long for a large sum
        for (int i = 0; i < n - 1; i++) {
            num += abs(ans[i + 1].first - ans[i].first) + abs(ans[i + 1].second - ans[i].second);
        }
        cout << num << endl;
        
        for (int i = 0; i < n; i++) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}
