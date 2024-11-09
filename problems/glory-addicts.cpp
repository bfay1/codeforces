#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (auto& x : a)
		cin >> x;
	for (auto& x : b)
		cin >> x;
	vector<vector<int>> v(2);

	for (int i = 0; i < n; i++)
		v[a[i]].push_back(b[i]);

	sort(v[0].begin(), v[0].end());
	sort(v[1].begin(), v[1].end());

	if (v[0].size() == v[1].size())
		ans -= min(v[0][0], v[1][0]);

	while (!v[0].empty() && !v[1].empty()) {
		ans += 2 * (v[0].back() + v[1].back());
		v[0].pop_back();
		v[1].pop_back();
	}

	for (auto x : v[0])
		ans += x;
	for (auto x : v[1])
		ans += x;

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
