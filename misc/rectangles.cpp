#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

	function<int(int, int)> bp = [&] (int a, int b) {
		int ret = 1;
		while (b) {
			if (b & 1)
				ret *= a;
			a *= a;
			b >>= 1;
		}
		return ret;
	};

	int n, m;
	cin >> n >> m;
	vector<vector<int>> g(n, vector<int>(m));
	vector<pair<int, int>> rows(n, {0, 0});
	vector<pair<int, int>> cols(m, {0, 0});
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
			if (g[i][j] == 0)
				rows[i].first++, cols[j].first++;
			else
				rows[i].second++, cols[j].second++;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x = rows[i].first;
		int y = rows[i].second;
		ans += bp(2, x) - 1LL;
		ans += bp(2, y) - 1LL;
	}
	for (int j = 0; j < m; j++) {
		int x = cols[j].first;
		int y = cols[j].second;
		ans += bp(2, x) - 1LL;
		ans += bp(2, y) - 1LL;
	}
	ans -= n * m;
	cout << ans << "\n";
}
