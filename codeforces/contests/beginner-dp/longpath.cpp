#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ifstream fin("longpath.in");
    ofstream fout("longpath.out");

    int n, m, ans = 0;
    fin >> n >> m;

    vector<vector<int>> g(n);
    vector<int> deg(n), dp(n);
    queue<int> q;

    for (int i = 0; i < m; i++) {
	int u, v;
	fin >> u >> v;
	g[--u].push_back(--v);
	deg[v]++;
    }

    for (int i = 0; i < n; i++)
	if (deg[i] == 0)
	    q.push(i);

    while (!q.empty()) {
	int sz = q.size();
	for (int i = 0; i < sz; i++) {
	    auto u = q.front();
	    q.pop();
	    for (auto v : g[u]) {
		dp[v] = max(dp[v], dp[u] + 1);
		ans = max(ans, dp[v]);
		deg[v]--;
		if (deg[v] == 0) {
		    q.push(v);
		}
	    }
	}
    }

    cout << ans << "\n";
}
