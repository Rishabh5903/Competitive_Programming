#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 200000;


int countBase3Digits(long long num) {
    int digits = 0;
    while (num) {
        digits++;
        num /= 3;
    }
    return digits;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> dp(MAX_N + 1, 0);
    vector<long long> prefixSum(MAX_N + 1, 0);

    for (int i = 1; i <= MAX_N; ++i) {
        dp[i] = countBase3Digits(i);
    }

    for (int i = 1; i <= MAX_N; ++i) {
        prefixSum[i] = prefixSum[i - 1] + dp[i];
    }

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (b > MAX_N) b = MAX_N;
        if (a > MAX_N) a = MAX_N;

        long long ans = 0;

        if (a + 1 <= b) {

            ans += prefixSum[b] - prefixSum[a];
        }

        ans += 2 * countBase3Digits(a);


        cout << ans << '\n';
    }

    return 0;
}
