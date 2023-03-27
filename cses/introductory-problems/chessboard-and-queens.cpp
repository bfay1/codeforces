#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	string g[8];
	bool c[8], sum[15], diff[15];
	int ans = 0;

	for (int i = 0; i < 8; i++) cin >> g[i];

	function <void(int)> dfs = [&] (int r) {
		if (r == 8) {
			++ans; 
			return;
		}
		for (int i = 0; i < 8; i++) {
			if (g[r][i] == '.' && !c[i] && !sum[i + r] && !diff[i - r + 7]) {
				c[i] = sum[i + r] = diff[i - r + 7] = true;
				dfs(r + 1);
				c[i] = sum[i + r] = diff[i - r + 7] = false;
			}
		}
	};

	dfs(0);
	cout << ans << "\n";
}