#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = 0;

        // Process the range [a+1, b]
        for (long long i = a + 1; i <= b; ++i) {
            long long temp = 0;
            long long num = i;
            while (num) {
                temp++;
                num /= 3;
            }
            ans += temp;
        }

        // Process the number `a`
        long long temp = 0;
        while (a) {
            temp++;
            a /= 3;
        }
        ans += 2 * temp;

        // Output the result
        cout << ans << '\n';
    }

    return 0;
}
