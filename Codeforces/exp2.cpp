#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int minReversals(string s1, string s2) {
    int n = s1.length();

    if (s1 == s2) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            // Find the next different character
            int j = i + 1;
            while (j < n && s1[j] == s2[j]) {
                j++;
            }

            // Ensure the substring length is even
            if ((j - i) % 2 != 0) {
                return -1; // Impossible to convert
            }

            // Reverse the substring
            reverse(s1.begin() + i, s1.begin() + j);
            count++;
        }
    }

    return count;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int result = minReversals(s1, s2);

    if (result == -1) {
        cout << "Impossible to convert" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}