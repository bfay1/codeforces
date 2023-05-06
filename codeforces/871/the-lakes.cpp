#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> g(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> g[i][j];

	int dir[] = {0, -1, 0, 1, 0};
	int ans = 0;
	int cur = 0;

	function <bool(int, int)> invalid = [&] (int i, int j) {
		return i >= n || i < 0 || j >= m || j < 0 || g[i][j] == 0;
	};

	function <void(int, int)> dfs = [&] (int i, int j) {
		if (invalid(i, j))
			return;
		cur += g[i][j];
		g[i][j] = 0;
		for (int x = 0; x < 4; x++)
			dfs(i + dir[x], j + dir[x + 1]);
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cur = 0;
			dfs(i, j);
			ans = max(ans, cur);
		}
	}

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;

	while (t--)
		solve();
}













