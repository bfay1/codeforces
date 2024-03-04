#include <bits/stdc++.h>
using namespace std;
#define int long long

const int inf = 1000000000000000;

signed main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> adj(n);
	vector<int> d(n, inf);
	vector<int> pred(n, -1);
	vector<int> path;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({0, 0});
	d[0] = 0;
	for (int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		--a;
		--b;
		adj[a].push_back({b, w});
		adj[b].push_back({a, w});
	}

	while (!pq.empty()) {
		pair<int, int> p = pq.top();
		pq.pop();
		int u = p.second, dist = p.first;
		if (dist > d[u])
			continue;
		for (pair<int, int> pr : adj[u]) {
			int v = pr.first;
			int nxt = dist + pr.second;
			if (nxt < d[v]) {
				d[v] = nxt;
				pq.push({nxt, v});
				pred[v] = u;
			}
		}
	}
	
	if (d[n - 1] == inf) {
		cout << -1 << "\n";
		return 0;
	}
	
	for (int i = n - 1; i != 0; i = pred[i])
		path.push_back(i + 1);
	path.push_back(1);	
	reverse(path.begin(), path.end());
	for (int i = 0; i < path.size(); i++)
		cout << path[i] << " \n"[i == path.size() - 1];
}
