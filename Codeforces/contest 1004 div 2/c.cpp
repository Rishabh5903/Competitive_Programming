#include <iostream>
#include <string>
#include <limits>
using namespace std;

bool contains_seven(long long num) {
    string s = to_string(num);
    return s.find('7') != string::npos;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (contains_seven(n)) {
            cout << 0 << "\n";
            continue;
        }
        
        string s = to_string(n);
        int len = s.length();
        int min_steps = numeric_limits<int>::max();
        
        for (int i = 1; i <= len; i++) {
            long long temp_n = n, steps = 0;
            long long nine = 0;
            for (int j = 0; j < i; j++) {
                nine = nine * 10 + 9;
            }
            
            while (!contains_seven(temp_n)) {
                temp_n += nine;
                steps++;
            }
            min_steps = min((long long)min_steps, steps);
        }
        
        cout << min_steps << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
