#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        // We need to calculate the maximum length of the "good" array.
        // Let us define the difference formula as:
        long long max_len = 0;
        long long current_val = l; // First element of the array
        
        // Start increasing by steps like 1, 2, 3, ...
        long long diff = 1;
        
        // Keep adding to current_val while it remains within bounds [l, r]
        while (current_val + diff <= r) {
            max_len++;  // We can add one more element to the array
            current_val += diff;  // Move to the next element in the array
            diff++;  // The next difference will be larger
        }
        
        // Output the length of the maximum "good" array for this test case
        cout << max_len + 1 << endl;  // +1 for the initial element at `l`
    }
    
    return 0;
}
