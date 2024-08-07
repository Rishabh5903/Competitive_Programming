#include <iostream>
#include <algorithm>

using namespace std;

int query(int a, int b) {
    cout << "? " << a << " " << b << endl;
    fflush(stdout);
    
    int measured_area;
    cin >> measured_area;
    
    return measured_area;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int low = 2;
        int high = 999;

        while (high - low >0 ) {

            int range = (high - low) / 3;

            int mid1 = low + range;
            int mid2 = low + 2 * range;
            


            int area2 = query(mid1, mid2);

            int expected_area2 = mid1 * mid2;

            
            if (area2 == (mid1+1) * (mid2+1)) {

                high = mid1;
            } else if (area2 == (mid1) * (mid2+1)) {

                high = mid2;low=mid1+1;
            } else if (area2 == (mid1) * (mid2)) {

                low=mid2+1;
            }
            // cout<<low<<" "<<high<<endl;
            
        }

        cout << "! " << low << endl;
        fflush(stdout);
    }
    
    return 0;
}
