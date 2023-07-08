#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, h;
    cin >> n >> m >> h;
    int p = 0, q = 0, rank = 1;

    for (int i = 0; i < n; i++) {
        int cnt = 0, pen = 0;
        vector<int> v(m);

        for (int j = 0; j < m; j++) {
            cin >> v[j];
        }

        sort(v.begin(), v.end());
        
        if (v[0] <= h) {
            cnt++;
            pen = v[0];
        }
        
        for (int j = 1; j < m; j++) {
            v[j] += v[j - 1];
            if (v[j] <= h) {
                cnt++;
                pen = v[j];
            }
        }
        
        if (i == 0) {
            p = cnt;
            q = pen;
        } else {
            if (cnt > p)
                rank++;
            else if (cnt == p && pen < q)
                rank++;
        }
    }

    cout << rank << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
