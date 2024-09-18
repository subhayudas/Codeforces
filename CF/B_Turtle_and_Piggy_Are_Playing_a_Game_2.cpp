#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> a(m);
        
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        
        for (int i = 1; i < m; ++i) {
            if (i % 2 == 1) {
                
                a[0] = max(a[0], a[i]);
            } else {

                a[0] = min(a[0], a[i]);
            }
        }
        
        cout << a[0] << endl;
    }
    return 0;
}
