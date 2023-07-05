#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> edges(n);

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		edges[u - 1]++;
		edges[v - 1]++;
	}

	map<int, int> mp;
	int x = 0, y = 0;

	for (auto e : edges)
		mp[e]++;

	for (auto& [e, f] : mp)
		if (f == 1)
			x = e;

	if (x == 0) {
		for (auto& [e, f] : mp)
			if (f == e + 1)
				x = e, y = e - 1;
		cout << x << " " << y << "\n";
		return;
	}

	for (auto& [e, f] : mp)
		if (f == x)
			y = e;

	cout << x << " " << --y << "\n";

}

signed main()
{
	int t;
	cin >> t;

	while (t--)
		solve();
}













