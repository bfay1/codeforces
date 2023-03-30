#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	string ans = "YES\n";
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	vector<int> b(n + 1, 1);
	for (int i = 1; i < n; i++)
		b[i] = lcm(a[i - 1], a[i]);
	for (int i = 0; i < n; i++)
		if (gcd(b[i], b[i + 1]) > a[i])
			ans = "NO\n";
	cout << ans;
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
