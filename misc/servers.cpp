#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, q, prev = 0;
	cin >> n >> q;
	int	open = n;
	vector<int> servers(n + 1, 0);
	while (q--) {
		int t, k, d;
		cin >> t >> k >> d;
		int delta = t - prev;
		prev = t;
		int sum = 0;

		for (int i = 1; i <= n; i++) {
			if (servers[i] > 0) {
				servers[i] = max(0LL, servers[i] - delta);
				if (servers[i] == 0)
					open++;
			}
		}

		if (k > open) {
			cout << -1 << "\n";
			continue;
		}

		for (int i = 1; i <= n; i++) {
			if (servers[i] == 0 && k > 0)
				servers[i] = d, sum += i, k--, open--;
		}

		cout << sum << "\n";
		prev = t;
	}
}
