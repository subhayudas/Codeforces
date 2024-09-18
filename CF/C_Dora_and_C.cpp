#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        int mn = c[0], mx = c[n - 1];
        int ans = mx - mn;
        for (int i = 0; i < n; i++) {
            int x = c[i] + a, y = c[i] + b;
            int new_mx = max(mx, max(x, y));
            int new_mn = min(mn, min(x, y));
            ans = min(ans, new_mx - new_mn);
        }
        cout << ans << endl;
    }
    return 0;
}