#include <bits/stdc++.h>


int main()
{
	std::cin.tie(nullptr)->sync_with_stdio(false);
	int n, m;
	char g[1000][1000];
	bool vis[1000][1000];
	int prv[1000][1000];
	int dx[4] = {-1, 0, 1, 0};
	int dy[4] = {0, 1, 0, -1};
	std::string dir = "URDL";
	std::queue<std::pair<int, int>> q;
	std::pair<int, int> begin, end;

	std::cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> g[i][j];
			if (g[i][j] == 'A') {
				begin = {i, j};
			} else if (g[i][j] == 'B') {
				end = {i, j};
			}
		}
	}

	q.push(begin);
	vis[begin.first][begin.second] = true;

	while (!q.empty()) {
		std::pair<int, int> u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			std::pair<int, int> v = {u.first + dx[i], u.second + dy[i]};
			if (v.first < 0 || v.second < 0 || 
				v.first >= n || v.second >= m ||
				g[v.first][v.second] == '#' ||
				vis[v.first][v.second])
				continue;
			vis[v.first][v.second] = true;
			prv[v.first][v.second] = i;
			q.push(v);
		}
	}

	if (vis[end.first][end.second]) {
		std::cout << "YES\n";
		std::vector<int> steps;
		while (end != begin) {
			int p = prv[end.first][end.second];
			steps.push_back(p);
			end = {end.first - dx[p], end.second - dy[p]};
		}
		std::reverse(steps.begin(), steps.end());
		std::cout << steps.size() << "\n";
		for (auto c : steps)
			std::cout << dir[c];
		std::cout << "\n";
	} else {
		std::cout << "NO\n";
	}
	return 0;
}
















