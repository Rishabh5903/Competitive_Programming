#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    vector<int> primes;
    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

bool can_sum_to_n(int n, const vector<int>& prime_squares) {
    unordered_set<int> squares_set(prime_squares.begin(), prime_squares.end());
    int length = prime_squares.size();
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            int required = n - (prime_squares[i] + prime_squares[j]);
            if (squares_set.find(required) != squares_set.end() && required != prime_squares[i] && required != prime_squares[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    vector<int> primes = sieve(100000);
    vector<int> prime_squares;
    for (int prime : primes) {
        prime_squares.push_back(pow(prime, 2));
    }

    vector<string> results;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        if (can_sum_to_n(N, prime_squares)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << '\n';
    }

    return 0;
}
