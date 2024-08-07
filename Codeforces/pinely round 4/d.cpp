#include <iostream>
#include <vector>
#include <bitset>
#include <unordered_set>

const int MAX_N = 200000;
const int MAX_XOR = (1 << 18) - 1;

// Function to generate primes up to MAX_XOR using the Sieve of Eratosthenes
std::vector<int> generatePrimes(int limit) {
    std::vector<int> primes;
    std::bitset<MAX_XOR + 1> is_prime;
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    return primes;
}

int main() {
    int t;
    std::cin >> t;
    
    std::vector<int> primes = generatePrimes(MAX_XOR);
    std::bitset<MAX_XOR + 1> is_prime;
    for (int p : primes) {
        is_prime[p] = 1;
    }

    while (t--) {
        int n;
        std::cin >> n;

        // Colors of the vertices
        std::vector<int> colors(n + 1, 0);
        int max_color = 0;

        // For each vertex, determine its color
        for (int i = 1; i <= n; ++i) {
            std::bitset<MAX_N + 1> used_colors;

            // Check adjacency with previously colored vertices
            for (int j = 1; j < i; ++j) {
                if (is_prime[i ^ j]) {
                    used_colors[colors[j]] = 1;
                }
            }

            // Assign the smallest available color
            int color = 1;
            while (used_colors[color]) {
                ++color;
            }
            colors[i] = color;
            max_color = std::max(max_color, color);
        }

        // Output the results
        std::cout << max_color << "\n";
        for (int i = 1; i <= n; ++i) {
            std::cout << colors[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
