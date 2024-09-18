#include <iostream>
#include <string>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string sequence;
        cin >> sequence;
        
        
        bool has_one = false;
        for (char ch : sequence) {
            if (ch == '1') {
                has_one = true;
                break;
            }
        }

        if (has_one) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
