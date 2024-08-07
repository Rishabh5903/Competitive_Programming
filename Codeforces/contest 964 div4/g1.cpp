#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

// Function to make a query and get the measured area
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
        
        while (low < high) {
            int mid = (low + high) / 2;
            
            // Query using rectangle of size mid x (mid + 1)
            int measured_area = query(mid, mid + 1);
            int expected_area = mid * (mid + 1);
            
            if (measured_area == expected_area) {
                // `x` is greater than `mid`
                low = mid + 1;
            } else if(measured_area==(mid+1)*(mid+2)){
                // `x` is less than or equal to `mid`
                high = mid;
            }
            else if(measured_area==(mid*(mid+2))){low=mid+1;break;}
            else{low=mid;break;}
        }
        
        // Output the found value of `x`
        cout << "! " << low << endl;
        fflush(stdout);
    }
    
    return 0;
}
