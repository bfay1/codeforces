#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;

	set<int> tri;
	map<int, int> mp;
	vector<int> vis(2024*2024);

	for (int i = 1; i <= 2023; i++) {
		int t = i*(i + 1)/2;
		tri.insert(t);
		mp[t] = i - 1;
	}

	function <int(int)> dfs = [&] (int x) {
		if (vis[x])
			return 0LL;
		vis[x] = 1;
		if (x == 1)
			return 1LL;
		int r = *tri.lower_bound(x);
		int l = *tri.lower_bound(x - 1);
		int i = mp[r];
		int ret = x*x;
		int offset = *tri.lower_bound(x - i + 1) + 1;
		if (l == r)
			ret += dfs(x - i - 1);
		if (x < r)
			ret += dfs(x - i);
		return ret;
	};

	while (t--) {
		int n;
		cin >> n;
		cout << dfs(n) << "\n";
	}
}






