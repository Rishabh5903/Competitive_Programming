#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> l(n);
        long long int prod = 1;
        for (long long int i = 0; i < n; i++) {
            cin >> l[i];
            prod *= l[i];
        }
        long long int num =(floor(pow(prod, 1.0 / n)));
        // cout<<num<<endl;
        if (pow(num, n) == prod || pow(num + 1, n) == prod) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
