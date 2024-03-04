#include <bits/stdc++.h>
using namespace std;
 
const int mod = 1e9 + 7;
 
signed main()
{
	int n;
	cin >> n;
	vector<vector<int>> adj(n + 1);
	vector<char> vis(n + 1);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
 
	function <long double(int)> dfs = [&] (int u) {
		if (vis[u])
			return (long double) 0;
		vis[u] = 1;	
		long double children = 0;
		for (auto c : adj[u])
			if (!vis[c]) 
				children++;
		long double p = 0;
		for (auto v : adj[u])
			if (!vis[v]) 
				p += (1.0 / children) * (1.0 + dfs(v));
		return (long double) p;
	};
 
	cout << fixed << setprecision(20);
 
	cout << dfs(1) << n;
}
