#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> dp(k + 1, 0);
        for (int i = 1; i <= k; ++i) {
            dp[i] = dp[i - 1] + a[i - 1]; // पहली बार क्वेस्ट i का पूरा करने पर
            for (int j = 0; j < n; ++j) {
                if (i >= j + 1) {
                    dp[i] = max(dp[i], dp[i - j - 1] + b[j]); // क्वेस्ट i के बाद के पूरे करने पर
                }
            }
        }

        cout << dp[k] << endl;
    }

    return 0;
}
