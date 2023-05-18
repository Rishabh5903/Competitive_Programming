#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 3;

    // Find the iterator pointing to the first element greater than or equal to the key
    auto it = std::lower_bound(arr, arr + n, key);
    std::cout<<it-arr;
    // If the iterator points to the end, all elements are less than the key
    if (it == std::end(arr)) {
        std::cout << "No element greater than or equal to " << key << " found in the array\n";
        return 0;
    }

    // Otherwise, the iterator points to the first element greater than or equal to the key
    int index = it - arr;
    std::cout << "The index of the first element greater than or equal to " << key << " is " << index << "\n";

    return 0;
}
