#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n), ans(n + 1, 1), mp(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = i;
	}
	int l = mp[1], r = mp[1];
	for (int i = 2; i <= n; i++) {
		l = min(l, mp[i]);
		r = max(r, mp[i]);
		if (r - l + 1 != i)
			ans[i] = 0;
	}

	for (int i = 1; i <= n; i++)
		cout << ans[i];
	cout << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
