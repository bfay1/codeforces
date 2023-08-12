#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, sum = 0, rem = LLONG_MAX, mn = LLONG_MAX;
		cin >> n;

		while (n--) {
			int m, c = LLONG_MAX, d = LLONG_MAX;
			cin >> m;

			while (m--) {
				int x;
				cin >> x;
				if (x <= c) {
					d = c;
					c = x;
				} else if (x <= d) {
					d = x;
				}
				mn = min(mn, x);
			}
			sum += d;
			rem = min(rem, d);
		}

		cout << sum - rem + mn << "\n";
	}
}
