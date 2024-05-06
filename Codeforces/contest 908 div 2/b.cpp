#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> l(n);
        unordered_map<int, int> fr;
        int cnt = 0;
        vector<int> lis;
        
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
            fr[l[i]]++;
            if (fr[l[i]] == 2) {
                cnt++;
                if (cnt <= 2) {
                    lis.push_back(l[i]);
                }
            }
        }
        
        if (cnt < 2) {
            cout << -1 << endl;
        } else {
            vector<int> ans(n);
            for (int i = 0; i < n; ++i) {
                if (find(lis.begin(), lis.end(), l[i]) == lis.end()) {
                    ans[i] = 1;
                } else {
                    if (fr[l[i]] == 1 && l[i] == lis[0]) {
                        ans[i] = 2;
                    } else if (fr[l[i]] == 1 && l[i] == lis[1]) {
                        ans[i] = 3;
                    } else {
                        ans[i] = 1;
                    }
                    fr[l[i]]--;
                }
            }
            for (int i = 0; i < n; ++i) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
