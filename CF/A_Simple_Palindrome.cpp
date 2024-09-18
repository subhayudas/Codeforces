#include <bits/stdc++.h>

using namespace std;

int n;

void solve() {
	cin >> n;
	string s;
	string v = "aeiou";
	for (int i = 0; i < 5; ++i) for (int j = 0; j < n / 5 + (i < n % 5); ++j) s += v[i];
	cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
