#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	sort(a.begin(), a.end());

	int l = 0, r = INT_MAX;
	int ans = a[n / 2];
	while (l <= r) {
		int x = midpoint(l, r);
		int sum = 0;
		for (int i = n / 2; i < n; i++)
			sum += max(0LL, x - a[i]);
		if (sum <= k) {
			ans = max(x, ans);
			l = x + 1;
		} else {
			r = x - 1;
		}
	}

	cout << ans << "\n";
}











