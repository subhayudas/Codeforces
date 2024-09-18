#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    
    vector<char> numbers;

    
    for (auto c : s) {
        if (c != '+') {
            numbers.push_back(c);
        }
    }

    
    sort(numbers.begin(), numbers.end());

    
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i != numbers.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}
