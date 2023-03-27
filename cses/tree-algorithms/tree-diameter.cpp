#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> adj(n + 1);
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		std::cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	int d = 0;
	int x = 0;

	std::function<void(int, int, int)> dfs = [&] (int s, int p, int dep) {
		for (auto i : adj[s]) {
			if (i != p) {
				dfs(i, s, dep + 1);
			}
		}
		if (dep > d) {
			d = dep;
			x = s;
		}
	};

	dfs(1, 0, 0);
	dfs(x, 0, 0);
	std::cout << d << "\n";
}
