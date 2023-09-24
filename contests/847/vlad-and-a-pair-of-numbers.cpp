#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int x; cin >> x;
	if (x & 1) {
		cout << -1 << "\n";
		return;
	} else {
		int a = x + x / 2;
		int b = x / 2;
		if ((a ^ b) == (a + b) / 2) cout << a << " " << b << "\n";
		else cout << -1 << "\n";
	}
}

signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
