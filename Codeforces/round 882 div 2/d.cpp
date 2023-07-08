#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    string s;
    cin >> s;

    vector<pair<int, int>> ranges(m);
    for (int i = 0; i < m; i++) {
        int li, ri;
        cin >> li >> ri;
        ranges[i] = make_pair(li, ri);
    }

    vector<int> flip_count(n + 1, 0);
    for (int i = 0; i < q; i++) {
        int xi;
        cin >> xi;
        flip_count[xi] ^= 1;
    }

    vector<int> ops_needed(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int li = ranges[i].first;
        int ri = ranges[i].second;
        ops_needed[li]++;
        ops_needed[ri + 1]--;
    }

    int flip = 0;
    for (int i = 1; i <= n; i++) {
        flip += ops_needed[i];
        ops_needed[i] = flip;
    }

    vector<int> one_counts(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        one_counts[i] = one_counts[i - 1] + (s[i - 1] == '1');
    }

    for (int i = 1; i <= n; i++) {
        if (flip_count[i])
            one_counts[i] = i - one_counts[i];
        else
            one_counts[i] = one_counts[i];
    }

    for (int i = 0; i < q; i++) {
        int xi = flip_count[i + 1] ? (one_counts[ranges[i].second] - one_counts[ranges[i].first - 1]) : (ranges[i].second - ranges[i].first + 1 - (one_counts[ranges[i].second] - one_counts[ranges[i].first - 1]));
        cout << ops_needed[i + 1] + xi << endl;
    }

    return 0;
}
