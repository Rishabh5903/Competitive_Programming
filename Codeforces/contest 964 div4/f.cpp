#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

// Function to compute factorial % MOD
std::vector<long long> factorial(int maxN) {
    std::vector<long long> fact(maxN + 1, 1);
    for (int i = 2; i <= maxN; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    return fact;
}

// Function to compute modular inverse using Fermat's Little Theorem
long long modInverse(long long a, long long m) {
    long long result = 1;
    long long exponent = m - 2;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = result * a % m;
        }
        a = a * a % m;
        exponent /= 2;
    }
    return result;
}

// Function to compute inverse factorials % MOD
std::vector<long long> inverseFactorial(const std::vector<long long>& fact) {
    int n = fact.size() - 1;
    std::vector<long long> invFact(n + 1);
    invFact[n] = modInverse(fact[n], MOD);
    for (int i = n - 1; i >= 0; --i) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
    return invFact;
}

// Function to compute nCr % MOD
long long nCr(int n, int r, const std::vector<long long>& fact, const std::vector<long long>& invFact) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

int main() {
    int t;
    std::cin >> t;

    // Maximum value for n from the problem constraints
    const int MAX_N = 200000;
    std::vector<long long> fact = factorial(MAX_N);
    std::vector<long long> invFact = inverseFactorial(fact);

    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        // Sorting the array
        std::sort(a.begin(), a.end());

        long long sum = 0;
        int halfK = k / 2;

        for (int i = 0; i < n; ++i) {
            if (i >= halfK && (n - i - 1) >= halfK) {
                long long contribution = a[i] * nCr(i, halfK, fact, invFact) % MOD * nCr(n - i - 1, halfK, fact, invFact) % MOD;
                sum = (sum + contribution) % MOD;
            }
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
