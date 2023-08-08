#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	
	std::vector<std::vector<int>> children(n);
	std::vector<int> ans(n);

	std::function<void(int)> dfs = [&] (int node) {
		ans[node] = 1;
		for (auto child : children[node]) {
			dfs(child);
			ans[node] += ans[child];
		}
	};

	for (int i = 1; i < n; i++) {
		int x;
		std::cin >> x;
		x--;
		children[x].push_back(i);
	}

	dfs(0);

	for (int i = 1; i <= n; i++)
		std::cout << ans[i - 1] - 1 << " \n"[i == n];
}
