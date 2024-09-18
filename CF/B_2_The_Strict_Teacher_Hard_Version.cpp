#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        
        vector<int> teachers(m);
        for (int i = 0; i < m; i++) {
            cin >> teachers[i];
        }
        
        sort(teachers.begin(), teachers.end()); 
        
        for (int i = 0; i < q; i++) {
            int david_position;
            cin >> david_position;
            
            auto it = lower_bound(teachers.begin(), teachers.end(), david_position);
            int min_moves = INT_MAX;
            
            // Check the closest teacher on the right (if exists)
            if (it != teachers.end()) {
                min_moves = min(min_moves, abs(*it - david_position));
            }
            
            // Check the closest teacher on the left (if exists)
            if (it != teachers.begin()) {
                min_moves = min(min_moves, abs(*(it - 1) - david_position));
            }
            
            // Add +2 to the result for the first query only
            if (i == 0 ) {
                cout << min_moves << endl;
            } else {
                cout << min_moves << endl;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);  // For faster input/output
    cin.tie(NULL);
    solve();
    return 0;
}
