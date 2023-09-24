#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1), id(n + 1);

    dp[1] = 1;

    vector<vector<pair<int, int>>> adj(n + 1);

    for (int i = 1; i < n; i++) {
	int u, v;
	cin >> u >> v;
	adj[u].push_back({ v, i });
	adj[v].push_back({ u, i });
    }

    int ans = 0;

    function <void(int)> dfs = [&] (int u) {
	for (auto [v, i] : adj[u]) {
	    if (dp[v] == 0) {
		dp[v] = dp[u] + (i <= id[u]);
		ans = max(ans, dp[v]);
		id[v] = i;
		dfs(v);
	    }
	}
    };

    dfs(1);

    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
