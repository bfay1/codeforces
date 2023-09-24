#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

signed main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> g(n + 1);
	vector<int> vis(n + 1);

	for (int i = 0; i < n - 1; i++) {
		int u, v, x;
		cin >> u >> v >> x;
		if (x == 0) {
			g[u].push_back(v);
			g[v].push_back(u);
		}
	}

	function <int(int, int)> bp = [&] (int a, int b) {
		int ret = 1;
		while (b) {
			if (b & 1)
				ret *= a;
			ret %= mod;
			a *= a;
			a %= mod;
			b >>= 1;
		}
		return ret % mod;
	};

	int sz = 0;

	function <void(int)> dfs = [&] (int u) {
		if (vis[u])
			return;
		sz++;
		vis[u] = 1;
		for (auto v : g[u])
			dfs(v);
	};

	int ans = bp(n, k);

	for (int i = 1; i <= n; i++) {
		if (vis[i])
			continue;
		sz = 0;
		dfs(i);
		ans -= bp(sz, k);
		ans += mod;
		ans %= mod;
	}

	cout << ans << "\n";
}











