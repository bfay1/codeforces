#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;

	auto g = [&] (int n, int x) {
		int sum = 0, mx = LLONG_MIN, m = n;

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

	while (t--) {
		int n, ans = 0;
		cin >> n;

		int l = 0, r = n;

		while (l <= r) {
			int m = midpoint(l, r);
			int y0 = f(n, m);
			int y1 = f(n, m + 1);
			if (y0 < y1)
				l = m + 1;
			else
				r = m - 1;
			ans = max({ans, y0, y1});
		}

		cout << ans << "\n";
	}
}
