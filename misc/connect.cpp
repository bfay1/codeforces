#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	vector<string> g(n);
	vector<vector<int>> vis(n, vector<int>(n));

	int dir[] = { 0, 1, 0, -1, 0 };
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	r1--, c1--, r2--, c2--;

	for (int i = 0; i < n; i++)
			cin >> g[i];

	function <bool(int, int)> valid = [&] (int i, int j) {
		return i < n && i >= 0 && j < n && j >= 0 && vis[i][j] == 0 && g[i][j] == '0';
	};

	function <void(int, int, vector<pair<int, int>>&)> dfs = 
		[&] (int i, int j, vector<pair<int, int>>& v) {
		if (!valid(i, j))
			return;
		vis[i][j] = 1;
		v.push_back({ i, j });
		for (int x = 0; x < 4; x++)
			dfs(i + dir[x], j + dir[x + 1], v);
	};

	function <int(int, int, int, int)> dist = [&] (int x1, int y1, int x2, int y2) {
		return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	};

	vector<pair<int, int>> one;
	vector<pair<int, int>> two;

	dfs(r1, c1, one);

	if (vis[r2][c2])
		return cout << "0\n", 0;

	dfs(r2, c2, two);

	int ans = INT_MAX;

	for (const auto& [x1, y1] : one)
		for (const auto& [x2, y2] : two)
			ans = min(ans, dist(x1, y1, x2, y2));

	cout << ans << "\n";
}











