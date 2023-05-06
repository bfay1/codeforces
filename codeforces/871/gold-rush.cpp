#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m;
	cin >> n >> m;

	function <bool(int)> dfs = [&] (int x) {
		if (x <= m || x % 3)
			return x == m;
		return dfs(x - x / 3) || dfs(x / 3);
	};

	if (dfs(n))
		cout << "YES\n";
	else
		cout << "NO\n";
}

signed main()
{
	int t;
	cin >> t;

	while (t--)
		solve();
}













