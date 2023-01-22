#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n, m; cin >> n >> m;
	int r, c;
	for (int i = 0; i < m; i++) {
		cin >> r >> c;
	}
	if (m < n) cout << "YES";
	else cout << "NO";
	cout << "\n";
}
int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
