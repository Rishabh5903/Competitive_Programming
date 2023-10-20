#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long modmul(long long a, long long b, long long m) {
    a %= m;
    b %= m;
    return (a * b) % m;
}

long long modpow(long long a, long long b, long long m) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = modmul(result, a, m);
        }
        a = modmul(a, a, m);
        b /= 2;
    }
    return result;
}

long long solve(long long A, long long B) {
    long long ans = 1;
    
    // Find prime factors of A and their counts
    for (long long i = 2; i * i <= A; i++) {
        if (A % i == 0) {
            long long count = 0;
            while (A % i == 0) {
                A /= i;
                count++;
            }
            ans = modmul(ans, (count * B + 1), MOD);
        }
    }
    
    if (A > 1) {
        ans = modmul(ans, (B + 1), MOD);
    }

    // Calculate modular inverse of 2
    long long inverseOf2 = modpow(2, MOD - 2, MOD);

    // Multiply ans by the modular multiplicative inverse of 2
    ans = modmul(ans, inverseOf2, MOD);

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n = 1;
    for (int t = 1; t <= n; t++) {
        long long A, B;
        cin >> A >> B;
        long long result = solve(A, B);
        cout << result << endl;
    }
    return 0;
}
