#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, ans = 0;
	cin >> n;

	auto f = [&] (int x) {
		int sum = 0, mx = 0, m = n;

		for (int i = 1; i < x; i++) {
			sum += i*i;
			mx = max(mx, i*i);
		}

		for (int i = x; i <= n; i++) {
			sum += m*i;
			mx = max(mx, m*i);
			m--;
		}

		return sum - mx;
	};

	int l = 0, r = n;

	while (l <= r) {
		int m = midpoint(l, r);
		int y0 = f(m), y1 = f(m + 1);
		if (y0 < y1)
			l = m + 1;
		else
			r = m - 1;
		ans = max({ans, y0, y1});
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
