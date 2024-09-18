#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the string
        string s;
        cin >> s;
        
        vector<int> freq(26, 0);
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        // Find the character with maximum frequency
        int max_freq = *max_element(freq.begin(), freq.end());
        
        if(max_freq > (n + 1) / 2) {
            // Not possible to arrange without having same adjacent characters
            // So we arrange by grouping same characters together
            string result = "";
            for(int i = 0; i < 26; i++) {
                result += string(freq[i], 'a' + i);
            }
            cout << result << "\n";
        } else {
            // Arrange to alternate characters
            priority_queue<pair<int, char>> pq;
            for(int i = 0; i < 26; i++) {
                if(freq[i] > 0) {
                    pq.push({freq[i], 'a' + i});
                }
            }
            string result = "";
            pair<int, char> prev = {-1, '#'};
            while(!pq.empty()) {
                auto curr = pq.top();
                pq.pop();
                result += curr.second;
                if(prev.first > 0) {
                    pq.push(prev);
                }
                curr.first--;
                prev = curr;
            }
            cout << result << "\n";
        }
    }
    return 0;
}
