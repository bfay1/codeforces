#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m, k, H, ans = 0;
	cin >> n >> m >> k >> H;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (abs(H - x) % k == 0 && abs(H - x) / k < m && H != x)
			ans++;
	}

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
