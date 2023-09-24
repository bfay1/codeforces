#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fin("longpath.in");
	ofstream fout("longpath.out");

	int n, m, ans = 0;
	fin >> n >> m;

	vector<vector<int>> g(n);
	vector<int> dp(n), order, deg(n), q, nq;

	for (int i = 0, u, v; i < m; i++) {
		fin >> u >> v;
		g[--u].push_back(--v);
		deg[v]++;
	}

	for (int i = 0; i < n; i++) {
		if (deg[i] == 0) {
			q.push_back(i);
		}
	}

	for (; q.size(); swap(q, nq), nq.clear()) {
		for (const auto& u : q) {
			order.push_back(u);
			for (const auto& v : g[u]) {
				if (--deg[v] == 0)
					nq.push_back(v);
			}
		}
	}

	for (const auto& i : order) {
		for (const auto& j : g[i]) {
			dp[j] = max(dp[j], dp[i] + 1);
			ans = max(ans, dp[j]);
		}
	}

	fout << ans;
}
