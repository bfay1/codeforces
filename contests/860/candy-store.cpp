#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		int l = 1;
		int g = 1;
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			g = gcd(x*y, g);
			l = lcm(y, l);
			if (i == 0 || g % l) {
				g = x*y;
				l = y;
				ans++;
			}
		}
		cout << ans << "\n";
	}
}

