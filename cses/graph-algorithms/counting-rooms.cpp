#include <bits/stdc++.h>
using namespace std;
 
char g[1000][1000];
 
int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, m; cin >> n >> m;
	
	function <bool(int, int)>
	invalid = [&] (int i, int j) {
		return (i >= n || j >= m || i < 0 || j < 0 || g[i][j] == '#');
	};
	
	function <void(int, int)>
	dfs = [&] (int i, int j) {
		if (invalid(i, j)) return;
		g[i][j] = '#';
		dfs(i + 1, j);
		dfs(i - 1, j);
		dfs(i, j + 1);
		dfs(i, j - 1);
	};
	
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (g[i][j] == '.') dfs(i, j), res++;
		}
	}
	cout << res << "\n";
	return 0;
}
