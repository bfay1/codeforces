#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;

	function <int(int, int)> f = [&] (int x, int m) {
		return x % m + m - 1 + (m / x);
	};

	while (t--) {
		int a, b, ans = INT_MAX;
		cin >> a >> b;
		int l = 1, r = INT_MAX;
		while (l < r) {
			int m = midpoint(l, r);
			int f0 = f(max(a, b), m) + 1;
			int f1 = f(max(a, b), m + 1) + 1;
			if (f0 < f1)
				r = m;
			else
				l = m + 1;
			ans = min(ans, f0);
			ans = min(ans, f1);
		}
		cout << ans << "\n";
	}
}
