#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> round_numbers;
        int factor = 1;
        
    while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                round_numbers.push_back(digit * factor);
            }
            n /= 10;
            factor *= 10;
        }
        
        
        cout << round_numbers.size() << endl;
        for (int i = 0; i < round_numbers.size(); i++) {
            cout << round_numbers[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
