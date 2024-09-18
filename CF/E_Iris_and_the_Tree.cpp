#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> adj[N];
int p[N], t[N], w, n;
long long ans[N];

void dfs(int node, int par) {
    for (int child : adj[node]) {
        if (child == par) continue;
        dfs(child, node);
        t[node] = max(t[node], t[child] + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> w;
        for (int i = 2; i <= n; i++) {
            cin >> p[i];
            adj[p[i]].push_back(i);
        }
        memset(t, 0, sizeof(t));
        for (int i = 2; i <= n; i++) {
            int x, y;
            cin >> x >> y;
            t[x] = y;
        }
        dfs(1, 0);
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += t[i];
            ans[i - 1] = sum;
        }
        for (int i = 0; i < n - 1; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}