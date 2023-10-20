#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n <= 6) {
            cout << "No" << endl;
        } else {
            if ((n - 3) % 3) {
                cout << "Yes" << endl;
                cout << "1 2 " << n - 3 << endl;
            } else if ((n - 5) != 4 && (n - 5) % 3) {
                cout << "Yes" << endl;
                cout << "1 4 " << n - 5 << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
