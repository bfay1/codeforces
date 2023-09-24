#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	sort(a.begin(), a.end());

	int ans = 0, l;
	for (l = 0; l < 2*k; l += 2)
		ans += a[l] + a[l + 1];

	int cur = ans;

	for (int i = 1; i <= k; i++) {
		l -= 2;
		cur = cur - (a[l] + a[l + 1]) + a[n - i];
		ans = min(cur, ans);
	}

	ans *= -1;
	for (auto x : a)
		ans += x;

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















