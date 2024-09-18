#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> intervals(m);
        for (int i = 0; i < m; i++) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        if (m == 0) {
            // No intervals, just reverse the permutation to maximize inversions
            cout << (n * (n - 1)) / 2 << endl;
            continue;
        }

        int left = n, right = 1;
        for (const auto& interval : intervals) {
            left = min(left, interval.second);
            right = max(right, interval.first);
        }

        if (left <= right) {
            cout << -1 << endl;
        } else {
            int k = left - right;
            int inv_max = k * (n - k);
            cout << inv_max << endl;
        }
    }
    return 0;
}
