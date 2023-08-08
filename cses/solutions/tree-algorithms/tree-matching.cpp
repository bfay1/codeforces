#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> adj(n + 1);

	for (int i = 0; i < n - 1; i++) {
		int u, v;
		std::cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	std::vector<int> visited(n + 1, 0);
	int ans = 0;

	std::function<void(int, int)> dfs = [&] (int u, int v) {
		for (auto i : adj[u]) {
			if (i != v) {
				dfs(i, u);
				if (!visited[i] && !visited[u]) {
					ans++;
					visited[i] = visited[u] = 1;
				}
			}
		}
	};
	
	dfs(1, 0);

	std::cout << ans << "\n";
}
