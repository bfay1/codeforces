#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int x = 0, y = 0;
	for (auto c : s) {
		if (c == 'L') x--;
		if (c == 'R') x++;
		if (c == 'U') y++;
		if (c == 'D') y--;
		if (x == 1 && y == 1) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}
 
signed main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
