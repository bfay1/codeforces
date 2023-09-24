#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k, ans = 0;
	cin >> n >> k;
	vector<string> a(n);
	for (auto& x : a)
		cin >> x;
	for (auto x : a)
		if (x == a[0])
			ans++;
	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
