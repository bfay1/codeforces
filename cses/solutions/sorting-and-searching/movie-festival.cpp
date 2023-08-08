#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> movies(n);
	for (auto& [a, b] : movies)
		cin >> a >> b;
	sort(movies.begin(), movies.end(), [&] (pair<int, int> a, pair<int, int> b) {
			if (a.second == b.second)
				return a.first < b.first;
			return a.second < b.second;
			});
	int back = INT_MAX;
	int ans = 1;

	for (auto [x, y] : movies) {
		if (x >= back)
			ans++, back = y;
		else if (y < back)
			back = y;
	}

	cout << ans << "\n";
}











