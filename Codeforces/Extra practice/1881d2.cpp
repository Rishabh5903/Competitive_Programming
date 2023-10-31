#include <bits/stdc++.h>
using namespace std;

bool tell(int mid, vector<int>& c, int k, vector<int>& b, int n) {
    c[0] = mid;
    sort(c.begin(), c.end());
    multiset<int> st;

    for (int i = 0; i < n; i++) {
        st.insert(b[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        auto it = st.upper_bound(c[i]);

        if (it == st.end()) {
            // Do nothing
        } else {
            st.erase(it);
        }
    }

    if (st.size() > k) {
        return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n), b(n);
        a[0] = 1;
        
        for (int i = 1; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        vector<int> c = a;
        sort(c.begin(), c.end());
        multiset<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(b[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            auto it = st.upper_bound(c[i]);

            if (it == st.end()) {
                // Do nothing
            } else {
                st.erase(it);
            }
        }
        
        int k = st.size();
        int lo = 1, hi = m, ans = m + 1;
        
        while (lo <= hi) {
            c = a;
            int mid = lo + (hi - lo) / 2;
            
            if (tell(mid, c, k, b, n)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        long long fin = static_cast<long long>(k) * (ans - 1);
        fin += static_cast<long long>(m - ans + 1) * (k + 1);
        
        cout << fin << endl;
    }
    
    return 0;
}
