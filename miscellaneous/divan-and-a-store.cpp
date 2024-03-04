#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, l, r, k, ans = 0; cin >> n >> l >> r >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (auto i : a) {
		if (i >= l && i <= r && k - i >= 0)
			ans++, k -= i;
	}
	cout << ans << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
