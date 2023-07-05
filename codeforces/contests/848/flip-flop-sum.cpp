#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int delta = -4;
	bool nc = false;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == -1 && a[i + 1] == -1) {
			delta = 4;
		} else if (a[i] != a[i + 1]) nc = true; 
	}
	if (nc == true && delta == -4) delta = 0;
	cout << accumulate(a.begin(), a.end(), 0) + delta << "\n";
}
 
signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
