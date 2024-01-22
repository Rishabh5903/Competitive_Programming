#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<char>& C, vector<char>& V, int i, vector<char>& ans, string& s, int n) {
    if (i >= (n - 1)) {
        return;
    } else if (i == (n - 2)) {
        ans.push_back(s[i]);
        ans.push_back(s[i + 1]);
    } else if (i == (n - 3)) {
        ans.push_back(s[i]);
        ans.push_back(s[i + 1]);
        ans.push_back(s[i + 2]);
    } else if (i <= (n - 4)) {
        if (find(C.begin(), C.end(), s[i + 3]) != C.end()) {
            ans.push_back(s[i]);
            ans.push_back(s[i + 1]);
            ans.push_back(s[i + 2]);
            ans.push_back('.');
            solve(C, V, i + 3, ans, s, n);
        } else {
            ans.push_back(s[i]);
            ans.push_back(s[i + 1]);
            ans.push_back('.');
            solve(C, V, i + 2, ans, s, n);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> ans;
        vector<char> C = {'b', 'c', 'd'};
        vector<char> V = {'a', 'e'};
        solve(C, V, 0, ans, s, n);
        for (char c : ans) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
