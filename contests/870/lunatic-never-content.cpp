#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	int l = 0, r = n - 1;
	int ans = INT_MAX;

	while (l <= r) {
		if (a[l] % ans != a[r] % ans) {
			if (ans == INT_MAX)
				ans = 0;
			ans = gcd(ans, abs(a[l] - a[r]));
		}
		l++;
		r--;
	}

	if (ans == INT_MAX)
		ans = 0;
	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}











