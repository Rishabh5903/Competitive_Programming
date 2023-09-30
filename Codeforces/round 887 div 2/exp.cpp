#include <iostream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> ordered_set;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ordered_set s;
        for (int i = 1; i <= n; ++i) {
            s.insert(i); // Insert integers 1 to n in the set
        }

        int days = 0;
        while (days < k) {
            int toRemove = *s.find_by_order(0); // Get the smallest element in the set
            s.erase(toRemove); // Remove the smallest element
            ++days;

            // Calculate the next number to remove
            int nextToRemove = toRemove;
            while (!s.empty() && *s.find_by_order(0) == nextToRemove) {
                s.erase(*s.find_by_order(0));
                ++nextToRemove;
            }

            if (nextToRemove <= n) {
                s.insert(nextToRemove); // Insert the next number to remove
            }
        }

        // The smallest element in the set after k days will be the first element
        // as the set is ordered.
        cout << *s.find_by_order(0) << endl;
    }

    return 0;
}
