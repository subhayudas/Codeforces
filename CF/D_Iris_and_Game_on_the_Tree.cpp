#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> adj[N];
int val[N];
int dp[N][2];

void dfs(int node, int par) {
    dp[node][0] = dp[node][1] = 0;
    for (int child : adj[node]) {
        if (child == par) continue;
        dfs(child, node);
        if (val[node] == 0) {
            dp[node][0] += max(dp[child][0], dp[child][1] + 1);
            dp[node][1] += max(dp[child][0] - 1, dp[child][1]);
        } else {
            dp[node][0] += max(dp[child][0] - 1, dp[child][1]);
            dp[node][1] += max(dp[child][0], dp[child][1] + 1);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string s;
        cin >> s;
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '?') val[i] = -1;
            else val[i] = s[i - 1] - '0';
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (val[i] == -1) {
                val[i] = 0;
                dfs(1, 0);
                ans = max(ans, dp[1][0]);
                val[i] = 1;
                dfs(1, 0);
                ans = max(ans, dp[1][0]);
                val[i] = -1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}