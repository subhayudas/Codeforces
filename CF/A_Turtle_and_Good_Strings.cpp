#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        string s;
        cin >> n >> s;  // Length of the string and the string itself

        bool isGood = false;

        // Iterate through possible split points
        for (int i = 1; i < n; i++) {
            // Split the string into t1 = s[0:i] and t2 = s[i:n]
            string t1 = s.substr(0, i);
            string t2 = s.substr(i, n - i);

            // Check if the first character of t1 is different from the last character of t2
            if (t1[0] != t2.back()) {
                isGood = true;
                break;
            }
        }

        // Output "YES" if the string is good, otherwise "NO"
        if (isGood) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
